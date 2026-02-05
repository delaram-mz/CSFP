
module dff(CK, Q, D);
  input CK;
  input D;
  output Q;
  DFF _0_ (
    .C(CK),
    .D(D),
    .Q(Q)
  );
endmodule

module DUT(clk, rst, D_i, Q_o);
input clk;
input rst;
input D_i;
output Q_o;
  
  dff DFF_0 (
    .CK(clk),
    .D(D_i),
    .Q(Q_o)
  );
  
endmodule
