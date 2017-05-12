global _ft_islower

section .text
true:	mov rax, 1
		ret

false:	mov rax, 0
		ret

_ft_islower:	cmp rdi, 'a'
				jge inferieur_z
				call false
				ret

inferieur_z:	cmp rdi, 'z'
				jle true
				call false
				ret
