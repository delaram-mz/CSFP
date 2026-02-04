
module sigROM (
input store,
input wire [3:0] address,  // 3-bit address input
output reg [25:0] data      // 8-bit data output
);
// Declare the ROM content using an initial block
reg [25:0] rom_content [0:11]; 

// // Initialize the ROM content from the file
// initial begin
// $readmemb("signatures.txt", rom_content);
// end

always @(posedge(store)) begin
$readmemb("signatures.txt", rom_content);
end

// Combinational logic for data output
always @(address) begin
    data = rom_content[address];
end
endmodule