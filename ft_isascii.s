global _ft_isascii

section .text
	true:	mov rax, 1
			ret

	false:	mov rax, 0
			ret
	_ft_isascii:	cmp rdi, 0
					jge inferieur_127
					call false
					ret
	inferieur_127:	cmp rdi, 127
					jle true
					call false
					ret
