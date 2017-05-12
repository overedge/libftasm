global _ft_isprint

section .text
true:	mov rax, 1
		ret

false:	mov rax, 0
		ret

_ft_isprint: cmp rdi, ' '
			 jge inferieur_126
			 call false
			 ret

inferieur_126:	cmp rdi, '~'
				jle true
				call false
				ret
