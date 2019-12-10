b main
.section .text
main:
mov sp,#0x8000<br>



.equ BASE_ADDR,0x3f200000     @Base address<br>.equ GPFSEL0,  0x0
.equ GPFSEL1,  0x04        @FSEL1 register offset | use to select GPIO 10-19 and                              @ set input/output/alt func
.equ GPFSEL2,  0x08        @FSEL2 register offset | use to select GPIO 20-29 and                              @ set input/output/alt func
.equ GPSET0,   0x1c        @GPSET0 register offset| use to set GPIO's logic                                   @ level high(3.3v)
.equ GPCLR0,   0x28        @GPCLR0 register offset| use to set GPIO's logic                                   @ level low(0v)
.equ GPLEV0,   0x34        @GPIO level offset     | use to read current level of                              @ pin(on/off)[high/low]{3.3v/0v}



.equ CLEAR_BITS21_23,0xFF1FFFFF @mask to clear bits 21 through 23 | use to set                                     @GPIO 17 to input




@=========================<br>@Returns State of Input Pin(GPIO 17)
@ARGUMENTS:1
@number of pin
@Reads state of pin from GPLEV0
@and returns it in r0
@=================================================
 getInput:
    push {r7,lr}
    mov r7,sp
    push {r1-r5}
@--------Set up stack frame
    ldr r4,[r7,#8]
@--------For readability
    argument .req r4
    result .req r5
@--------get first arg
    mov mask,#1
    lsl mask,argument        @create mask based on argument
        
    ldr base,=BASE_ADDR    @addr of base peripherals
    ldr offset,=GPLEV0        @GPLEV holds pin states
    ldr result,[base,offset]        @access GPLEV0
    tst result,mask        @cmp input pin to 1
    moveq r0,#0        @if pin state is 
    movne r0,#1        @if pin state is 
@--------
    .unreq argument
    .unreq result
@------Destroy stack frame
    pop {r1-r5}                
    pop {r7,lr}
    add sp,sp,#4        @clean up argument on stack
    mov pc,lr        @return
