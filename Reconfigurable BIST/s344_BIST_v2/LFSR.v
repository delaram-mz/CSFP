`timescale 1ns / 1ps
module LFSR	#(parameter n = 8 )
			( clk, rst, en, poly, seed, d_out, ld);
			
	input clk, rst, en, ld;
	input [ n - 1 : 0 ] seed;
	input [ n - 1 : 0 ] poly;
	output reg [ n - 1 : 0 ] d_out;
	// input [ 3 : 0 ] flipIdx;
	
	integer i;
	
	always @( posedge clk or posedge rst ) begin

		if( rst == 1'b1 ) begin
			// if ( mode == 1'b1) begin
				d_out <= seed;
				// d_out[29] <= !seed[29];
				// d_out <= seed;
			// end
			//  else
				// d_out <= seed;
		end		
		else begin
			if (ld == 1'b1)
				d_out <= seed; //loading the seed		
			else if( en == 1'b1 )begin
				d_out[n - 1] <=   d_out[0];
				for( i = 0; i < n - 1; i = i + 1 ) begin
					d_out[i] <= ( d_out[0] & poly[i] ) ^ d_out[i + 1];
				end //for
			end			
		end
	end

	
endmodule