
module flipDemux ( //Seed Flipping Mem
input wire [5:0] bitToFlip, 
input reg  [17:0] currentSeed,
output  [17:0] nextSeed     
);

reg [17:0] temp;
always @(bitToFlip) begin
    temp = currentSeed;
    // if(bitToFlip == 6'b111111) begin
    //     temp = currentSeed;
    // end
    // else begin
        temp [bitToFlip] = ~ currentSeed[bitToFlip];
    // end
    // data = rom_content[address];
end
assign nextSeed = temp;

endmodule