`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:08:26 01/21/2014 
// Design Name: 
// Module Name:    reg_bank 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module reg_bank( trigger,address,data,we,oe);      
        

 input trigger;
 input [3:0] address ;
 
 input we;
 input oe; 
 
 //--------------Inout Ports----------------------- 
 inout [31:0]  data       ;
 
 //--------------Internal variables---------------- 
 reg [31:0] data_out ;
 reg [31:0] mem [15:0];
 reg oe_r;
 

//---------------Initialise memory---------------

initial begin
mem[1][31:0]=32'b0;
mem[15][31:0]=32'b1;
end


 //--------------Code Starts Here------------------ 
  
  // Tri-State Buffer control 
 // output : When we = 0, oe = 1
  
  assign data = ( oe && ! we) ? data_out : 32'bz; 
 
  // Memory Write Block 
  // Write Operation : When we = 1 
  always @ (posedge trigger or negedge trigger)
  begin : MEM_WRITE
     if ( we ) begin
         mem[address] = data_out;
     end
  end
  
  // Memory Read Block 
  // Read Operation : When we = 0, oe = 1,
  always @ (posedge trigger or negedge trigger)
  begin : MEM_READ
    if (! we && oe) begin
      data_out = mem[address];
      oe_r = 1;
    end else begin
      oe_r = 0;
    end
  end
  
 
endmodule
