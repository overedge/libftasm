global _ft_strchr

section .text
	_ft_strchr: 
				cmp sil, [rdi]
				je end2
				cmp byte [rdi], 0
				je end
				inc rdi
				jmp _ft_strchr

end: mov rax, 0
	 ret

end2: mov rax, rdi
	  ret
