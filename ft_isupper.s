global _ft_isupper

section .text
true:	mov rax, 1
		ret

false:	mov rax, 0
		ret

_ft_isupper:	cmp rdi, 'A'
				jge inferieur_Z
				call false
				ret

inferieur_Z:	cmp rdi, 'Z'
				jle true
				call false
				ret
