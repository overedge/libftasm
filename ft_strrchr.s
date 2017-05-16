global _ft_strrchr

section .text
		_ft_strrchr: mov r10, 0

while : 
		cmp sil, [rdi]
		je regis
		cmp byte [rdi], 0
		je end
		inc rdi
		jmp while

end:	mov rax, r10 
		ret

regis: 
	  mov r10, rdi
	  cmp byte [rdi], 0
	  je end
	  inc rdi
	  jmp while

