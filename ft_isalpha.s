global _ft_isalpha

section .text
_ft_isalpha :	cmp rdi, 'a'
				jge inferieur_z
				cmp rdi, 'A'
				jge inferieur_Z
				call false
				ret

inferieur_z:	cmp rdi, 'z'
				jle true
				call false
				ret

inferieur_Z:	cmp rdi, 'Z'
				jle true
				call false
				ret

true :	mov rax, 1
		ret

false : mov rax, 0
		ret
