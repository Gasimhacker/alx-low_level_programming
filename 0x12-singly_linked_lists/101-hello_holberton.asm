	global main
	extern printf


	section  .text
main:
	push rbp


	mov rdi, msg		;	The address of the string to print
	mov rax, 0		;	no SSE regs used
	call	printf    	;	"Hello, Holberton\n"

	pop rbp

	mov rax, 0		;
	ret			;	return (0)


	section  .data

	msg: db `Hello, Holberton`, 10
