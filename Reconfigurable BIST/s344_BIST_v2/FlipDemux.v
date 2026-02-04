
module flipDemux ( //Seed Flipping Mem
input wire [5:0] bitToFlip, 
input reg  [8:0] currentSeed,
output  [8:0] nextSeed     
);

reg [8:0] temp;
always @(bitToFlip) begin
    temp = currentSeed;
    temp [bitToFlip] = ~ currentSeed[bitToFlip];
    // data = rom_content[address];
end
assign nextSeed = temp;

endmodule