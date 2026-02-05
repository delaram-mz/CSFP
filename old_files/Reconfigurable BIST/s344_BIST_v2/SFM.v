
module SFM ( //Seed Flipping Mem
input wire [3:0] address,  // 3-bit address input
output reg [5:0] data      // log2 of PRPG length
);
// Declare the ROM content using an initial block
reg [6:0] rom_content [0:7]; 

// Initialize the ROM content from the file
initial begin
$readmemb("SFM.txt", rom_content);
end

// always @(posedge(store)) begin
// $readmemb("signatures.txt", rom_content);
// end

// Combinational logic for data output
always @(address) begin
    data = rom_content[address];
end
endmodule