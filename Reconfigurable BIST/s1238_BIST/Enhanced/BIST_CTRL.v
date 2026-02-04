
module counter #(parameter n = 8)
	(clk, rst, en, out);
	input clk, rst, en;
	output [n-1:0] out;
	reg [n-1:0] temp;

	always @ (posedge clk) begin
		if (rst == 1'b1) 
			temp = 0;
		else if (en == 1'b1)
			temp = temp + 1'b1;
	end
	assign out = temp;
endmodule

module BIST_CTRL 
	#(parameter shiftSize = 90, numOfCycles = 100, numOfRounds = 5, group = 4)
	(clk, rst, runLBIST, PbarS, rstOut, PRPG_En, SRSG_En, SISA_En, MISR_En, done, sigAddr, LFSR_internalRst, group_cnt_out, mode, ld_seed);
	input clk, rst, runLBIST, mode;
	output [8:0] sigAddr, group_cnt_out;
	// output fail;
	output reg PbarS, rstOut, PRPG_En, SRSG_En, SISA_En, MISR_En, done, ld_seed;
	output LFSR_internalRst;
	parameter Reset=4'b0000, firstPI=4'b0001, firstPPI=4'b0010, normalMode=4'b0011, shiftMode=4'b0100, lastPO=4'b0101, lastPPO=4'b0110, NR=4'b0111, DO=4'b1000, init=4'b1001;
	reg [3:0] pstate, nstate;

	reg SC_cnt_rst , TC_cnt_rst, TR_cnt_rst, group_cnt_rst;
	reg SC_cnt_en , TC_cnt_en, TR_cnt_en, group_cnt_en;
	wire [8:0] SC_cnt_out;
	wire [8:0] TC_cnt_out, TR_cnt_out;
	reg SC_eq, TC_eq, TR_eq, LFSR_internalRst_local, group_eq;
	reg readSig;

	always @ (posedge clk, posedge rst) begin
		if (rst == 1'b1)
			pstate = init;
		else if (clk == 1'b1)
			pstate = nstate;
	end

	always @ (pstate, runLBIST, SC_eq, TC_eq, TR_eq) begin
		PbarS = 1'b0;	rstOut = 1'b0; 
		PRPG_En = 1'b0; SRSG_En = 1'b0; 
		SISA_En = 1'b0; MISR_En = 1'b0;
		SC_cnt_rst = 1'b0;  SC_cnt_en = 1'b0;
		TC_cnt_rst = 1'b0;  TC_cnt_en = 1'b0;
		TR_cnt_rst = 1'b0;  TR_cnt_en = 1'b0;
		done = 1'b0;
		readSig = 1'b0;
		LFSR_internalRst_local = 1'b0;
		group_cnt_en = 1'b0;
		group_cnt_rst = 1'b0;
		ld_seed = 1'b0;

		case (pstate) 

		init: begin
			if (runLBIST == 1'b1)
				nstate = Reset;
			else
				nstate = init;
			// ld_seed = 1'b1;
			// if (group_eq == 1'b0)
			// 	nstate = init;
			// else 
			// 	nstate = Reset;
			LFSR_internalRst_local = 1'b1;
			rstOut = 1'b1;
			TR_cnt_rst  = 1'b1;	
			group_cnt_rst = 1'b1;



		end

		Reset: begin
			// if (runLBIST == 1'b1)
			// 	nstate = firstPI;
			// else
			// 	nstate = Reset;

			if (group_eq == 1'b1)
				nstate = init;
			else 
				nstate = firstPI;

			rstOut 		= 1'b1; 
			// LFSR_internalRst_local = 1'b1;
			ld_seed = 1'b1;

			TR_cnt_rst  = 1'b1;	
			// group_cnt_en = 1'b1;
			
		end

		firstPI: begin
			nstate 		= firstPPI;
			PRPG_En 	= 1'b1;
			SC_cnt_rst  = 1'b1;
			TC_cnt_rst  = 1'b1;
			TR_cnt_rst  = 1'b1;	
			

		end

		firstPPI: begin
			if (SC_eq == 1'b1)
				nstate = normalMode;
			else
				nstate = firstPPI;

			SC_cnt_en   = 1'b1;
			SRSG_En 	= 1'b1;
			PbarS   	= 1'b1;
		end

		normalMode: begin
			nstate 		= shiftMode;
			MISR_En 	= 1'b1;
			TC_cnt_en   = 1'b1;
			SC_cnt_rst  = 1'b1;
			PRPG_En 	= 1'b1;
		end

		shiftMode: begin
			if (SC_eq == 1'b0)
				nstate = shiftMode;
			else begin
				if (TC_eq == 1'b0)
					nstate = normalMode;
				else begin
					if(TR_eq == 1'b0) begin
						nstate 		= NR;
						// nstate 		= normalMode;
						// done 		= 1'b1;
						// readSig		= 1'b1;
						// TC_cnt_rst 	= 1'b1;
						// TR_cnt_en 	= 1'b1;
					end
					else 
						nstate = lastPO;
				end
			end
			SRSG_En 	= 1'b1;
			SISA_En 	= 1'b1;
			SC_cnt_en   = 1'b1;
			PbarS   	= 1'b1;
		end

		NR: begin
			nstate = normalMode;
			done 		= 1'b1;
			readSig		= 1'b1;
			TC_cnt_rst 	= 1'b1;
			TR_cnt_en 	= 1'b1;
			// group_cnt_en = 1'b1;
			// LFSR_internalRst_local = 1'b1;
		end

		lastPO: begin
			nstate = lastPPO;
			MISR_En 	= 1'b1;
			SC_cnt_rst  = 1'b1;
		end 

		lastPPO: begin
			if (SC_eq == 1'b1) begin
				nstate = DO;
				// done = 1'b1;
				// readSig = 1'b1;
			end
			else
				nstate = lastPPO;
			SISA_En 	= 1'b1;
			SC_cnt_en   = 1'b1;
			PbarS   	= 1'b1;
		end

		DO: begin
			nstate = Reset;
			done = 1'b1;
			readSig = 1'b1;
			group_cnt_en = 1'b1;
			// group_cnt_en = 1'b1;
		end
		endcase	
	end


    counter #( .n(9) ) Shift_Cnt_inst (
            .clk(clk), 
            .rst(SC_cnt_rst), 
            .en(SC_cnt_en),
            .out(SC_cnt_out)
        );

	counter #( .n(9) ) TestCycle_Cnt_inst (
            .clk(clk), 
            .rst(TC_cnt_rst), 
            .en(TC_cnt_en),
            .out(TC_cnt_out)
        );

	counter #( .n(9) ) TestRound_Cnt_inst (
            .clk(clk), 
            .rst(TR_cnt_rst), 
            .en(TR_cnt_en),
            .out(TR_cnt_out)
        );

	counter #( .n(9) ) session_Cnt_inst (
            .clk(clk), 
            .rst(group_cnt_rst), 
            .en(group_cnt_en),
            .out(group_cnt_out)
        );
	assign SC_eq = (SC_cnt_out == shiftSize -1) ? 1'b1 : 1'b0;
	assign TC_eq = (TC_cnt_out == numOfCycles -1) ? 1'b1 : 1'b0;
	assign TR_eq = (TR_cnt_out == numOfRounds -1) ? 1'b1 : 1'b0;
	assign group_eq = (group_cnt_out == group+1) ? 1'b1 : 1'b0;
	// assign sigAddr = (done == 1'b1) ? TR_cnt_out : 6'b0000;
	// assign sigAddr = (done == 1'b1) ? group_cnt_out : 6'b0000;

	assign LFSR_internalRst = (mode == 1'b1) ? LFSR_internalRst_local : rstOut;

	counter #( .n(9) ) sigAddr_Cnt_inst (
            .clk(clk), 
            .rst(rst), 
            .en(done),
            .out(sigAddr)
        );

endmodule