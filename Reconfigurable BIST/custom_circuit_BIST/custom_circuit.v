
module dff (CK,Q,D);
input CK,D;
output Q;
always @(posedge CK) 
  begin
  Q <= D; 
  end 
endmodule

module custom(clk, A, B, C, D, Y0, Y1);
input clk, A, B, C, D;
output Y0, Y1;

  wire w1, w2, w3, w4, w5, w6;

  dff DFF_0(clk,w5,w1);
  dff DFF_1(clk,w4,w3);
  nand NAND2_0(w1,A,B);
  nand NAND2_1(w2,w1,C);
  nand NAND2_2(w3,w2,D);
  nand NAND2_3(w6,w2,w4);
  nand NAND2_4(Y1,w5,w6);

  assign Y0 = w5;

endmodule
