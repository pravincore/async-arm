`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 		
// Engineer: 
// 
// Create Date:    18:35:27 01/11/2014 
// Design Name: 
// Module Name:    cpu 
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
/*Thoughts:
There will be no uncertainities at the time of initialization if proper care is
taken while desiging the initialization of the intial triggering module of the
pipeline, the rom interface.
*/
////////////////////////// CPU code begins ///////////////////////////////////////
module cpu(
output reg [31:0]romAddr,	//
output reg romTrigger,		//      ROM port
input [7:0]romData,			//

output reg [31:0]ramAddr,	//
output reg ramTrigger,		//  RAM Port
output reg ramRW,				//
inout [7:0]ramData,			//

input [31:0]inPort,			//		Generic input port

output reg [31:0]outPort	//	Generic output port
    );
	 
	 reg [31:0]regBank[15:0];	//		Core register bank
	 
	 
	 
	 
	 
endmodule
