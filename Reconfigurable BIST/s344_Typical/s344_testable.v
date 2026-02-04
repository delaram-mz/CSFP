module s344_testable 
    # ( parameter 
        sizePI      = 9, 
        sizePO      = 11,
        PRPG_Size   = 9,
        MISR_Size   = 11,
        SRSG_Size   = 15,
        SISA_Size   = 15,
        ShiftSize   = 15,
        numOfCycles = 4, 
        numOfRounds = 11)
    (clk, rst, NbarT, normalPI, normalPO, PRPG_poly, PRPG_seed, SRSG_poly, SRSG_seed, MISR_poly, MISR_seed, SISA_poly, SISA_seed, sigOut, storeSig, fail, done);
    input clk;
    input rst;
    input NbarT;
    input storeSig;
    output reg fail;
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
    wire [3:0] sigAddr;
    // DUT instance
    
  
    s344_scanInserted DUT (
		.CK(clk),
		.rst(rst),
		.Si(Si_sig),
		.So(So_sig),
		.PbarS(PbarS_sig),
        .START(DUT_PI[0]),
        .A0(DUT_PI[1]),
        .A1(DUT_PI[2]),
        .A2(DUT_PI[3]),
        .A3(DUT_PI[4]),
        .B0(DUT_PI[5]),
        .B1(DUT_PI[6]),
        .B2(DUT_PI[7]),
        .B3(DUT_PI[8]),
        .CNTVCO2(DUT_PO[0]),
        .CNTVCON2(DUT_PO[1]),
        .P0(DUT_PO[2]),
        .P1(DUT_PO[3]),
        .P2(DUT_PO[4]),
        .P3(DUT_PO[5]),
        .P4(DUT_PO[6]),
        .P5(DUT_PO[7]),
        .P6(DUT_PO[8]),
        .P7(DUT_PO[9]),
        .READY(DUT_PO[10])
		);

    // PRPG instance
    LFSR #(.n(PRPG_Size)) PRPG_inst (
            .clk(clk), 
            .rst(internalRst), 
            .en(PRPG_En),
            .poly(PRPG_poly),
            .seed(PRPG_seed),
            .d_out(testPI)
        );
    // SRSG instance
    SRSG #(.n(SRSG_Size)) SRSG_inst (
            .clk(clk), 
            .rst(internalRst), 
            .en(SRSG_En),
            .poly(SRSG_poly),
            .seed(SRSG_seed),
            .Sout(Si_sig)
        );
    //MISR instance
    MISR #(.n(MISR_Size)) MISR_inst (
            .clk(clk), 
            .rst(internalRst), 
            .en(MISR_En),
            .poly(MISR_poly),
            .seed(MISR_seed),
            .d_in(testPO),
            .d_out(MISR_Out)
        );
    //SISA instance
    SISA #(.n(SISA_Size)) SISA_inst (
            .clk(clk), 
            .rst(internalRst), 
            .en(SISA_En),
            .poly(SISA_poly),
            .seed(SISA_seed),
            .Sin(So_sig),
            .data(SISA_Out)
        );


    //CTRL instance
    BIST_CTRL #( .shiftSize(ShiftSize), .numOfCycles(numOfCycles), .numOfRounds(numOfRounds)) 
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
        if (done == 1'b1)
            fail = (goldenSig != sigOut);
        else
            fail = 1'b0;
    end
endmodule