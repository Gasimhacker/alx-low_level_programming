	global main
	extern printf


	section  .text
main:
	lea rdi, [rel msg]	;	The address of the string to print
	mov al, 0		;	no SSE regs used
	call	printf    	;	"Hello, Holberton\n"

	mov rax, 0x3c		;	exit
	xor rdi, rdi		;	EXIT_SUCCESS
	syscall			;	exit(EXIT_SUCCESS)


	section  .data

	msg: db `Hello, Holberton\n`, 0
