module s1238_testable 
    # ( parameter 
        sizePI      = 14, 
        sizePO      = 14,
        PRPG_Size   = 14,
        MISR_Size   = 4,
        SRSG_Size   = 5,
        SISA_Size   = 5,
        ShiftSize   = 5,
        numOfCycles = 3, 
        numOfRounds = 12, 
        groupValue  = 6, 
        bound       = 18)
    (clk, rst, NbarT, normalPI, normalPO, PRPG_poly, PRPG_seed, SRSG_poly, SRSG_seed, MISR_poly, MISR_seed, SISA_poly, SISA_seed, sigOut, storeSig, fail, done, sigAddrOut, mode, testPI, session);
    input clk;
    input rst;
    input NbarT;
    input storeSig, mode, session;
    output reg fail;
    reg local_fail;
    input [sizePI-1:0] normalPI;
    output [sizePO-1:0] normalPO;
    input [PRPG_Size-1:0]PRPG_poly, PRPG_seed;
    input [SRSG_Size-1:0]SRSG_poly, SRSG_seed;
    input [MISR_Size-1:0]MISR_poly, MISR_seed;
    input [SISA_Size-1:0]SISA_poly, SISA_seed;
    output done;
    output [MISR_Size+SISA_Size-1:0] sigOut;
    wire [MISR_Size+SISA_Size-1:0] goldenSig;

    reg [PRPG_Size-1:0]PRPG_seed_local;
    wire [PRPG_Size-1:0] flipped_seed;

    wire [MISR_Size-1:0] MISR_Out;
    wire [SISA_Size-1:0] SISA_Out;

    output [sizePI-1:0] testPI;
    wire [sizePI-1:0] DUT_PI, normalPI;
    wire [sizePO-1:0] DUT_PO, testPO;
    wire Si_sig, So_sig, PbarS_sig;
    output reg [5:0] sigAddrOut;
    wire [8:0] sigAddr, groupVal, addr_groupVal;
    wire LFSR_internalRst, seed_ld_wire;
    wire [5:0] flippingVal;
    reg [bound-1:0] compare;
    // DUT instance
    
    s1238_scanInserted DUT (
		.CK(clk),
		.rst(rst),
		.Si(Si_sig),
		.So(So_sig),
		.PbarS(PbarS_sig),
        .G0(DUT_PI[0]),
        .G1(DUT_PI[1]),
        .G10(DUT_PI[2]),
        .G11(DUT_PI[3]),
        .G12(DUT_PI[4]),
        .G13(DUT_PI[5]),
        .G2(DUT_PI[6]),
        .G3(DUT_PI[7]),
        .G4(DUT_PI[8]),
        .G5(DUT_PI[9]),
        .G6(DUT_PI[10]),
        .G7(DUT_PI[11]),
        .G8(DUT_PI[12]),
        .G9(DUT_PI[13]),
        .G45(DUT_PO[0]),
        .G530(DUT_PO[1]),
        .G532(DUT_PO[2]),
        .G535(DUT_PO[3]),
        .G537(DUT_PO[4]),
        .G539(DUT_PO[5]),
        .G542(DUT_PO[6]),
        .G546(DUT_PO[7]),
        .G547(DUT_PO[8]),
        .G548(DUT_PO[9]),
        .G549(DUT_PO[10]),
        .G550(DUT_PO[11]),
        .G551(DUT_PO[12]),
        .G552(DUT_PO[13])
		);

 // PRPG instance
    LFSR #(.n(PRPG_Size)) PRPG_inst (
            .clk(clk), 
            .rst(LFSR_internalRst), 
            .en(PRPG_En),
            .poly(PRPG_poly),
            .seed(PRPG_seed_local),
            .d_out(testPI),
            .ld(seed_ld_wire)
        );
    // SRSG instance
    SRSG #(.n(SRSG_Size)) SRSG_inst (
            .clk(clk), 
            .rst(LFSR_internalRst), 
            .en(SRSG_En),
            .poly(SRSG_poly),
            .seed(SRSG_seed),
            .Sout(Si_sig)
        );
    //MISR instance
    MISR #(.n(MISR_Size)) MISR_inst (
            .clk(clk), 
            .rst(LFSR_internalRst), 
            .en(MISR_En),
            .poly(MISR_poly),
            .seed(MISR_seed),
            .d_in(testPO),
            .d_out(MISR_Out)
        );
    //SISA instance
    SISA #(.n(SISA_Size)) SISA_inst (
            .clk(clk), 
            .rst(LFSR_internalRst), 
            .en(SISA_En),
            .poly(SISA_poly),
            .seed(SISA_seed),
            .Sin(So_sig),
            .data(SISA_Out)
        );


    //CTRL instance
    BIST_CTRL #( .shiftSize(ShiftSize), .numOfCycles(numOfCycles), .numOfRounds(numOfRounds), .group(groupValue) )
    CTRL_inst (
            .clk(clk), 
            .rst(rst), 
            .runLBIST(NbarT),
            .PbarS(PbarS_CTRL),
            .rstOut(internalRst),
            .PRPG_En(PRPG_En),
            .SRSG_En(SRSG_En),
            .SISA_En(SISA_En),
            .MISR_En(MISR_En),
            .done(done),
            .sigAddr(sigAddr),
            .LFSR_internalRst(LFSR_internalRst),
            .group_cnt_out(groupVal),
            .mode(mode),
            .ld_seed(seed_ld)
        );

    //sigROM instance
    sigROM sigROM_inst (
            .store(storeSig),
            .address(sigAddr), 
            .data(goldenSig)
        );

    // SFM instance
    SFM SFM_inst (
            .address(addr_groupVal),
            .data(flippingVal)
        );

    // flipDemux instance
    flipDemux flipDemux_inst (
            .bitToFlip(flippingVal),
            .currentSeed(testPI),
            .nextSeed(flipped_seed)
        );

    assign DUT_PI = (NbarT == 1'b1 ) ? testPI : normalPI;
    assign normalPO = (NbarT == 1'b1 ) ? 1'b0 : DUT_PO;
    assign testPO = DUT_PO;
    assign PbarS_sig = (NbarT == 1'b1 ) ? PbarS_CTRL : 1'b0;
    assign sigOut = {MISR_Out, SISA_Out};
    // assign detected = (goldenSig == sigOut) ? 1'b0 : 1'b1;
	// assign fail = ((goldenSig != sigOut) & (done == 1'b1))? 1'b1 : 1'b0;
    always @ (posedge clk) begin
        if (session == 1'b1) 
            compare = 0;
        else begin
            if (done == 1'b1) begin
                local_fail = (goldenSig != sigOut);
                compare[sigAddr] = (goldenSig != sigOut);
            end
            else begin
                local_fail = 1'b0;
                compare[sigAddr] = 1'b0;
            end
        end
        if (sigAddr == (bound-1))
        begin
            if (|compare == 1'b1)
                fail = 1'b1;
        end
        else
            fail = 1'b0;
            
    end
    always @ (posedge fail) begin
        sigAddrOut = sigAddr;
    end

    // always @ (flipIdx, rst) begin
    //     PRPG_seed_local = PRPG_seed;
    //     // PRPG_seed_local[flipIdx+10] = !PRPG_seed[flipIdx+10];
    // end 


    // always @(sigAddr) begin
    //     if ( sigAddr == 4'b0000)
    //         PRPG_seed_local = PRPG_seed;
    //     else
    //         PRPG_seed_local = flipped_seed;

    // end

    assign PRPG_seed_local = ((groupVal == 9'b000000000) || (flippingVal == 6'b111111)) ? PRPG_seed : flipped_seed;
    assign addr_groupVal = (groupVal == 9'b000000000)? 9'b100000000 : groupVal -1;
    assign seed_ld_wire = (flippingVal != 6'b111111)? seed_ld : 1'b0;

endmodule