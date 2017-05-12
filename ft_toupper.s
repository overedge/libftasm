global _ft_toupper

section .text
_ft_toupper: cmp rdi, 'a'
			 jge inferieur_z
			 mov rax, rdi
			 ret

inferieur_z: cmp rdi, 'z'
			 jle sub_32
			 mov rax, rdi
			 ret

sub_32: sub rdi, 32
		mov rax, rdi
		ret
