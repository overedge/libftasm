%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1
%define WRITE				4

global _ft_puts
extern _ft_strlen

section .text

	_ft_puts: call _ft_strlen; rax contient len
			  add rax, 1; on ajoue 1 pour \n
			  mov r8, rdi; on stock ladresse de str
			  mov r9, rax; on stock la taille
				push rbp
				mov rbp, rsp
				sub rsp, r9
			  mov rdi, STDOUT; 1 param write
			  lea rsi, [rel r8] ; 2 param write
			  mov rdx, r9; 3 param write
			  mov rax, MACH_SYSCALL(WRITE)
			  syscall
			  leave
			  ret
