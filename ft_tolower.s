global _ft_tolower

section .text

_ft_tolower: cmp rdi, 'A'
			 jge inferieur_Z
			 mov rax, rdi
			 ret

inferieur_Z: cmp di, 'Z'
			 jle add_32
			 mov rax, rdi
			 ret

add_32: add rdi, 32
		mov rax, rdi
		ret
