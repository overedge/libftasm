global _ft_isalnum
extern _ft_isdigit
extern _ft_isalpha

section .text
	true:	mov rax, 1
			ret
	false:	mov rax, 0
			ret

_ft_isalnum:	call _ft_isdigit
				cmp rax, 0
				je _ft_isalpha
				call true
				ret
