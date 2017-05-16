%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1
%define READ				3
%define WRITE				4
%define BUFF_SIZE 50
global _ft_cat

section .bss
buffer resb BUFF_SIZE

section .text
	_ft_cat:
	push rbp
	mov rbp, rsp

	__read:
	push rdi
	mov rsi, buffer
	mov rdx, BUFF_SIZE
	mov rax, MACH_SYSCALL(3) ; read
	syscall
	jc end ; detect syscall eror with cary flag
	cmp rax, 0
	jle end
	mov rdi, 1
	mov rdx, rax
	mov rax, MACH_SYSCALL(4) ; write
	syscall
	pop rdi
	jmp __read

	end:
	mov rsp, rbp
	pop		rbp
	ret
