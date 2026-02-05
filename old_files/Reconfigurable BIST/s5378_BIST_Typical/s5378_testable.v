module s344_testable 
    # ( parameter 
        sizePI      = 35, 
        sizePO      = 49,
        PRPG_Size   = 35,
        MISR_Size   = 49,
        SRSG_Size   = 179,
        SISA_Size   = 179,
        ShiftSize   = 179,
        numOfCycles = 4, 
        numOfRounds = 11)
    (clk, rst, NbarT, normalPI, normalPO, PRPG_poly, PRPG_seed, SRSG_poly, SRSG_seed, MISR_poly, MISR_seed, SISA_poly, SISA_seed, sigOut, storeSig, fail, done, sigAddrOut, mode, seed_ld, testPI, session);
    input clk;
    input rst;
    input NbarT;
    input storeSig, mode, seed_ld, session;
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

    wire [MISR_Size-1:0] MISR_Out;
    wire [SISA_Size-1:0] SISA_Out;

    output [sizePI-1:0] testPI;
    wire [sizePI-1:0] DUT_PI, normalPI;
    wire [sizePO-1:0] DUT_PO, testPO;
    wire Si_sig, So_sig, PbarS_sig;
    output reg [3:0] sigAddrOut;
    wire [3:0] sigAddr, flipIdx;
    wire LFSR_internalRst;

    reg [11:0] compare;
    // DUT instance
    
  
    s5378_scanInserted DUT (
		.CK(clk),
		.rst(rst),
		.Si(Si_sig),
		.So(So_sig),
		.PbarS(PbarS_sig),
        .n3065gat(DUT_PI[0]),
        .n3066gat(DUT_PI[1]),
        .n3067gat(DUT_PI[2]),
        .n3068gat(DUT_PI[3]),
        .n3069gat(DUT_PI[4]),
        .n3070gat(DUT_PI[5]),
        .n3071gat(DUT_PI[6]),
        .n3072gat(DUT_PI[7]),
        .n3073gat(DUT_PI[8]),
        .n3074gat(DUT_PI[9]),
        .n3075gat(DUT_PI[10]),
        .n3076gat(DUT_PI[11]),
        .n3077gat(DUT_PI[12]),
        .n3078gat(DUT_PI[13]),
        .n3079gat(DUT_PI[14]),
        .n3080gat(DUT_PI[15]),
        .n3081gat(DUT_PI[16]),
        .n3082gat(DUT_PI[17]),
        .n3083gat(DUT_PI[18]),
        .n3084gat(DUT_PI[19]),
        .n3085gat(DUT_PI[20]),
        .n3086gat(DUT_PI[21]),
        .n3087gat(DUT_PI[22]),
        .n3088gat(DUT_PI[23]),
        .n3089gat(DUT_PI[24]),
        .n3090gat(DUT_PI[25]),
        .n3091gat(DUT_PI[26]),
        .n3092gat(DUT_PI[27]),
        .n3093gat(DUT_PI[28]),
        .n3094gat(DUT_PI[29]),
        .n3095gat(DUT_PI[30]),
        .n3097gat(DUT_PI[31]),
        .n3098gat(DUT_PI[32]),
        .n3099gat(DUT_PI[33]),
        .n3100gat(DUT_PI[34]),
        .n3104gat(DUT_PO[0]),
        .n3105gat(DUT_PO[1]),
        .n3106gat(DUT_PO[2]),
        .n3107gat(DUT_PO[3]),
        .n3108gat(DUT_PO[4]),
        .n3109gat(DUT_PO[5]),
        .n3110gat(DUT_PO[6]),
        .n3111gat(DUT_PO[7]),
        .n3112gat(DUT_PO[8]),
        .n3113gat(DUT_PO[9]),
        .n3114gat(DUT_PO[10]),
        .n3115gat(DUT_PO[11]),
        .n3116gat(DUT_PO[12]),
        .n3117gat(DUT_PO[13]),
        .n3118gat(DUT_PO[14]),
        .n3119gat(DUT_PO[15]),
        .n3120gat(DUT_PO[16]),
        .n3121gat(DUT_PO[17]),
        .n3122gat(DUT_PO[18]),
        .n3123gat(DUT_PO[19]),
        .n3124gat(DUT_PO[20]),
        .n3125gat(DUT_PO[21]),
        .n3126gat(DUT_PO[22]),
        .n3127gat(DUT_PO[23]),
        .n3128gat(DUT_PO[24]),
        .n3129gat(DUT_PO[25]),
        .n3130gat(DUT_PO[26]),
        .n3131gat(DUT_PO[27]),
        .n3132gat(DUT_PO[28]),
        .n3133gat(DUT_PO[29]),
        .n3134gat(DUT_PO[30]),
        .n3135gat(DUT_PO[31]),
        .n3136gat(DUT_PO[32]),
        .n3137gat(DUT_PO[33]),
        .n3138gat(DUT_PO[34]),
        .n3139gat(DUT_PO[35]),
        .n3140gat(DUT_PO[36]),
        .n3141gat(DUT_PO[37]),
        .n3142gat(DUT_PO[38]),
        .n3143gat(DUT_PO[39]),
        .n3144gat(DUT_PO[40]),
        .n3145gat(DUT_PO[41]),
        .n3146gat(DUT_PO[42]),
        .n3147gat(DUT_PO[43]),
        .n3148gat(DUT_PO[44]),
        .n3149gat(DUT_PO[45]),
        .n3150gat(DUT_PO[46]),
        .n3151gat(DUT_PO[47]),
        .n3152gat(DUT_PO[48])
		);

    // PRPG instance
    LFSR #(.n(PRPG_Size)) PRPG_inst (
            .clk(clk), 
            .rst(LFSR_internalRst), 
            .en(PRPG_En),
            .poly(PRPG_poly),
            .seed(PRPG_seed_local),
            .d_out(testPI),
            .ld(seed_ld)
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
            .sigAddr(sigAddr),
            .LFSR_internalRst(LFSR_internalRst),
            .session_cnt_out(flipIdx),
            .mode(mode),
            .session(session)
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
        if (sigAddr == 11)
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

    always @ (flipIdx, rst) begin
        PRPG_seed_local = PRPG_seed;
        // PRPG_seed_local[flipIdx+10] = !PRPG_seed[flipIdx+10];
    end 

endmodule