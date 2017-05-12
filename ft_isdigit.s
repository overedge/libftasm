global _ft_isdigit

section .text
_ft_isdigit:
		cmp rdi, '0'
		jge inferieur_9
		call false
		ret


inferieur_9:
		cmp rdi, '9'
		jle true
		call false
		ret

true:	mov rax, 1
		ret

false:	mov rax, 0
		ret
