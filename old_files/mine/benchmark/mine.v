module mine (
    input wire a, b, c, d, e,
    output wire y1, y2, y3
);
    wire n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14;

    // NOT gates
    not (n1, a); // 1st gate
    not (n2, b); // 2nd gate

    // NAND gates
    nand (n3, a, b); // 3rd gate
    nand (n4, c, d); // 4th gate
    nand (n5, n1, c); // 5th gate
    nand (n6, n2, d); // 6th gate
    nand (n7, n3, n4); // 7th gate
    nand (n8, n5, n6); // 8th gate

    // NOR gates
    nor (n9, a, b); // 9th gate
    nor (n10, c, d); // 10th gate
    nor (n11, n1, c); // 11th gate
    nor (n12, n2, d); // 12th gate
    nor (n13, n9, n10); // 13th gate
    nor (n14, n11, n12); // 14th gate

    // Outputs
    nand (y1, n7, n8); // 15th gate
    nor (y2, n13, n14); // Using existing gates
    not (y3, e); // Using existing NOT gate

endmodule
