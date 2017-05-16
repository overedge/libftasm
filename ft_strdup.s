global _ft_strdup
extern _ft_strlen
extern _malloc
; char         *ft_strdup(const char *s1);
; rax                           rdi

section .text
	_ft_strdup: mov rsi, rdi ; save de rdi
				call _ft_strlen ; apelle strlen avec rdi
				cmp rax, 0 ; si 0
				je end ; go end
				mov rcx, rax ; copie la taille pour rep
				mov rdi, rax ; copie la taille pour malloc
				call _malloc ; maloc rdi octects
				mov rdi, rax ; rdi = zone malloc
				mov r9, rdi ; copi de zone malloc
				cld
				rep movsb ; copy rsi dans rdi
				mov rax, r9 ; retourne zone malloc
				ret

end: mov rax, 0
	 ret
