module s820_testable 
    # ( parameter 
        sizePI      = 18, 
        sizePO      = 19,
        PRPG_Size   = 18,
        MISR_Size   = 19,
        SRSG_Size   = 5,
        SISA_Size   = 5,
        ShiftSize   = 5,
        numOfCycles = 3, 
        numOfRounds = 12, 
        groupValue  = 6, 
        bound       = 18)
    (clk, rst, NbarT, normalPI, normalPO, PRPG_poly, PRPG_seed, SRSG_poly, SRSG_seed, MISR_poly, MISR_seed, SISA_poly, SISA_seed, sigOut, storeSig, fail, done, session);
    input clk;
    input rst;
    input NbarT;
    input storeSig, session;
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

    wire [MISR_Size-1:0] MISR_Out;
    wire [SISA_Size-1:0] SISA_Out;

    wire [sizePI-1:0] DUT_PI, normalPI, testPI;
    wire [sizePO-1:0] DUT_PO, testPO;
    wire Si_sig, So_sig, PbarS_sig;
    wire [7:0] sigAddr;
    reg [bound-1:0] compare;
    wire LFSR_internalRst;

    // DUT instance
    
  
    s820_scanInserted DUT (
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
        .G14(DUT_PI[6]),
        .G15(DUT_PI[7]),
        .G16(DUT_PI[8]),
        .G18(DUT_PI[9]),
        .G2(DUT_PI[10]),
        .G3(DUT_PI[11]),
        .G4(DUT_PI[12]),
        .G5(DUT_PI[13]),
        .G6(DUT_PI[14]),
        .G7(DUT_PI[15]),
        .G8(DUT_PI[16]),
        .G9(DUT_PI[17]),
        .G288(DUT_PO[0]),
        .G290(DUT_PO[1]),
        .G292(DUT_PO[2]),
        .G296(DUT_PO[3]),
        .G298(DUT_PO[4]),
        .G300(DUT_PO[5]),
        .G302(DUT_PO[6]),
        .G310(DUT_PO[7]),
        .G312(DUT_PO[8]),
        .G315(DUT_PO[9]),
        .G322(DUT_PO[10]),
        .G325(DUT_PO[11]),
        .G327(DUT_PO[12]),
        .G43(DUT_PO[13]),
        .G45(DUT_PO[14]),
        .G47(DUT_PO[15]),
        .G49(DUT_PO[16]),
        .G53(DUT_PO[17]),
        .G55(DUT_PO[18])
		);

    // PRPG instance
    LFSR #(.n(PRPG_Size)) PRPG_inst (
            .clk(clk), 
            .rst(LFSR_internalRst), 
            .en(PRPG_En),
            .poly(PRPG_poly),
            .seed(PRPG_seed),
            .d_out(testPI)
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
    BIST_CTRL #( .shiftSize(ShiftSize), .numOfCycles(numOfCycles), .numOfRounds(numOfRounds), .group(groupValue)) 
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
            .LFSR_internalRst(LFSR_internalRst),
            .done(done),
            .sigAddr(sigAddr)
        );

    //sigROM instance
    sigROM sigROM_inst (
            .store(storeSig),
            .address(sigAddr), 
            .data(goldenSig)
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
endmodule