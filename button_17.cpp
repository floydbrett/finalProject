//Test C++ Program
#include <iostream>
 
extern "C" int button_17();
asm(R"(
.globl button_17
	.type button_17, @button_17
	button_17:
	.cfi_startproc
	  cmp r0, #17
	  bhi .pin_invalid
	  mov r2, #1
	  ldr r3, =PI_IOBASE_ADDR
	  lsr r1, r0, #5
	  ldr r3, [r3, r1, lsl #2]
	  and r0, r0, #31
	  ands r3, r3, r2, lsl r0
	  movne r0, r2
	  moveq r0, #0
	  ret
	  bx lr
	.pin_invalid:
	  mov r0, #0
	  bx lr
	  .ltorg	;@ Tell assembler ltorg data for this code can go here
	  ret
	.cfi_endproc
)");

int main()
{
	std::cout << button_17();
	return 0;
}