
module custom_scanInserted(clk, A, B, C, D, Y0, Y1, rst, Si, So, PbarS);
  input rst;
  input Si;
  output So;
  input PbarS;

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
  input A;
  input B;
  input C;
  input D;
  output Y0;
  output Y1;
  input clk;
  wire w1;
  wire w3;
  wire w4;
  wire w5;
  NAND _14_ (
    .A(_04_),
    .B(_03_),
    .Y(_09_)
  );
  NAND _15_ (
    .A(_09_),
    .B(_11_),
    .Y(_07_)
  );
  NAND _16_ (
    .A(_07_),
    .B(_10_),
    .Y(_12_)
  );
  NAND _17_ (
    .A(_07_),
    .B(_13_),
    .Y(_08_)
  );
  NAND _18_ (
    .A(_08_),
    .B(_05_),
    .Y(_06_)
  );
 dff DFF_0(
 	.C(clk),
 	.CE(1'b1),
 	.CLR(rst),
 	.D(w1),
 	.NbarT(PbarS),
 	.PRE(1'b0),
 	.Q(w5),
 	.Si(Si),
 	.global_reset(1'b0)
 );

 dff DFF_1(
 	.C(clk),
 	.CE(1'b1),
 	.CLR(rst),
 	.D(w3),
 	.NbarT(PbarS),
 	.PRE(1'b0),
 	.Q(w4),
 	.Si(w5),
 	.global_reset(1'b0)
 );

	 POUT _90000_ (
		.A(w5),
		.Y(Y0)
	);

	 PIN _70000_ (
		.A(B),
		.Y(_03_)
	);

	 PIN _70001_ (
		.A(A),
		.Y(_04_)
	);

  assign w1 = _09_;
	 PIN _70002_ (
		.A(D),
		.Y(_10_)
	);

	 PIN _70003_ (
		.A(C),
		.Y(_11_)
	);

  assign w3 = _12_;
  assign _13_ = w4;
  assign _05_ = w5;
	 POUT _90001_ (
		.A(_06_),
		.Y(Y1)
	);


	 POUT _90002_ (
		.A(w4),
		.Y(So)
	);

endmodule
