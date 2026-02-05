
module c17(N1, N2, N3, N6, N7, N22, N23);
  wire _00_;
  wire _01_;
  wire _02_;
  wire _03_;
  wire _04_;
  wire _05_;
  wire _06_;
  wire _07_;
  wire _08_;
  wire _09_;
  wire _10_;
  wire _11_;
  wire _12_;
  wire _13_;
  wire _14_;
  input N1;
  input N2;
  output N22;
  output N23;
  input N3;
  input N6;
  input N7;
  NAND _15_ (
    .A(_09_),
    .B(_08_),
    .Y(_13_)
  );
  NAND _16_ (
    .A(_10_),
    .B(_08_),
    .Y(_14_)
  );
  NAND _17_ (
    .A(_14_),
    .B(_04_),
    .Y(_06_)
  );
  NAND _18_ (
    .A(_06_),
    .B(_13_),
    .Y(_11_)
  );
  NAND _19_ (
    .A(_14_),
    .B(_12_),
    .Y(_07_)
  );
  NAND _20_ (
    .A(_07_),
    .B(_06_),
    .Y(_05_)
  );
  assign _04_ = N2;
  assign _08_ = N3;
  assign _09_ = N1;
  assign _10_ = N6;
  assign N22 = _11_;
  assign _12_ = N7;
  assign N23 = _05_;
endmodule
