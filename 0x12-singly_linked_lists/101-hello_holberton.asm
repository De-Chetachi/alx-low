section .text
	global main
main:
	;length of message to be printed
	mov edx, length

	;message to be printed
	mov ecx, print_msg
	mov ebx, 1

	;system call (sys_write)
	mov eax, 4
	;call the kernal
	int 0x80

	;systen call (sys_exit)
	mov eax, 1

	;call the kernal
	int 0x080

section .data
	;define message to be printed
	;db means define byte
	;a new line in assembly language is defined by 10 or 0xa

	print_msg db "Hello, Holberton",10

	;define the length of the message to be printed
	length equ $ -print_msg
