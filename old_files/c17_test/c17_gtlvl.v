
module c17 ( N1, N2, N3, N6, N7, N22, N23 );
  input N1, N2, N3, N6, N7;
  output N22, N23;
  wire   n7, n8, n9, n10;

  AOI21_X1 U7 ( .B1(n7), .B2(n8), .A(n9), .ZN(N23) );
  INV_X1 U8 ( .A(N7), .ZN(n8) );
  OAI21_X1 U9 ( .B1(n9), .B2(n7), .A(n10), .ZN(N22) );
  NAND2_X1 U10 ( .A1(N1), .A2(N3), .ZN(n10) );
  INV_X1 U11 ( .A(N2), .ZN(n7) );
  AND2_X1 U12 ( .A1(N6), .A2(N3), .ZN(n9) );
endmodule

