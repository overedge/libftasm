%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1
%define WRITE				4

global _ft_puts
extern _ft_strlen

section .rodata
new_line: db 0xa

section .text

	_ft_puts: 
			  cmp rdi, 0
			  je end
			  call _ft_strlen; rax contient len
			  mov r8, rdi
			  mov r9, rax
			  mov rdi, STDOUT; 1 param write
			  mov rsi, r8 ; 2 param write
			  mov rdx, r9; 3 param write
			  mov rax, MACH_SYSCALL(WRITE)
			  syscall
			  mov rdi, STDOUT; 1 param write
			  mov rsi, new_line ; 2 param write
			  mov rdx, 1; 3 param write
			  mov rax, MACH_SYSCALL(WRITE)
			  syscall
			  ret
end: mov eax, 10
	ret
