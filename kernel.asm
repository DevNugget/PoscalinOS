bits 	32
section .text
	align 4
	dd    0x1BADB002			; Magic number
	dd    0x00
	dd    - (0x1BADB002+0x00)

global start					; Start point to execute with linker
extern kmain					; External function that will be included in C code (kernel.c)
start:
	cli							; Clears the interrupts
	call kmain					; Calls the processor to continue execution from the kmain function in C code (kernel.c)
	hlt							; Pauses the CPU from executing from this address
