
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
	#(parameter shiftSize = 90, numOfCycles = 100, numOfRounds = 5)
	(clk, rst, runLBIST, PbarS, rstOut, PRPG_En, SRSG_En, SISA_En, MISR_En, done, sigAddr);
	input clk, rst, runLBIST;
	output [2:0] sigAddr;
	// output fail;
	output reg PbarS, rstOut, PRPG_En, SRSG_En, SISA_En, MISR_En, done;
	parameter Reset=3'b000, firstPI=3'b001, firstPPI=3'b010, normalMode=3'b011, shiftMode=3'b100, lastPO=3'b101, lastPPO=3'b110;
	reg [2:0] pstate, nstate;

	reg SC_cnt_rst , TC_cnt_rst, TR_cnt_rst;
	reg SC_cnt_en , TC_cnt_en, TR_cnt_en;
	wire [2:0] SC_cnt_out , TC_cnt_out, TR_cnt_out;
	reg SC_eq, TC_eq, TR_eq;
	reg readSig;

	always @ (posedge clk, posedge rst) begin
		if (rst == 1'b1)
			pstate = Reset;
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

		case (pstate)  
		Reset: begin
			if (runLBIST == 1'b1)
				nstate = firstPI;
			else
				nstate = Reset;
			rstOut 		= 1'b1; 
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
			else if (SC_eq == 1'b1 && TC_eq == 1'b0)
				nstate = normalMode;
			else if(TR_eq == 1'b0) begin
				nstate 		= normalMode;
				done 		= 1'b1;
				readSig		= 1'b1;
				TC_cnt_rst 		= 1'b1;
				TR_cnt_en 		= 1'b1;
			end
			else 
				nstate = lastPO;

			SRSG_En 	= 1'b1;
			SISA_En 	= 1'b1;
			SC_cnt_en   = 1'b1;
			PbarS   	= 1'b1;
		end

		lastPO: begin
			nstate = lastPPO;
			MISR_En 	= 1'b1;
			SC_cnt_rst  = 1'b1;
		end 

		lastPPO: begin
			if (SC_eq == 1'b1) begin
				nstate = Reset;
				done = 1'b1;
				readSig = 1'b1;
			end
			else
				nstate = lastPPO;
			SISA_En 	= 1'b1;
			SC_cnt_en   = 1'b1;
			PbarS   	= 1'b1;
		end
		endcase	
	end


    counter #( .n(3) ) Shift_Cnt_inst (
            .clk(clk), 
            .rst(SC_cnt_rst), 
            .en(SC_cnt_en),
            .out(SC_cnt_out)
        );

	counter #( .n(3) ) TestCycle_Cnt_inst (
            .clk(clk), 
            .rst(TC_cnt_rst), 
            .en(TC_cnt_en),
            .out(TC_cnt_out)
        );

	counter #( .n(3) ) TestRound_Cnt_inst (
            .clk(clk), 
            .rst(TR_cnt_rst), 
            .en(TR_cnt_en),
            .out(TR_cnt_out)
        );
	assign SC_eq = (SC_cnt_out == shiftSize -1) ? 1'b1 : 1'b0;
	assign TC_eq = (TC_cnt_out == numOfCycles -1) ? 1'b1 : 1'b0;
	assign TR_eq = (TR_cnt_out == numOfRounds -1) ? 1'b1 : 1'b0;
	assign sigAddr = (done == 1'b1) ? TR_cnt_out : 3'b000;
endmodule