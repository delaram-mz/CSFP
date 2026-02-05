
module flipDemux ( //Seed Flipping Mem
input wire [5:0] bitToFlip, 
input reg  [34:0] currentSeed,
output  [34:0] nextSeed     
);

reg [34:0] temp;
always @(bitToFlip) begin
    temp = currentSeed;
    temp [bitToFlip] = ~ currentSeed[bitToFlip];
    // data = rom_content[address];
end
assign nextSeed = temp;

endmodule