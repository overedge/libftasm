global _ft_strlen

_ft_strlen: 

	cmp rdi, 0 ; si null rax = 0
	je end
	cmp byte [rdi], 0 ; si "" rax = 0
	je end

	mov rbx, rdi            ; rbx = rdi
	mov al, 0 ; al = \0
	cld
	mov   rcx, 0xffffffff
	repne scasb               ; while [rdi] != al,
	sub   rdi, rbx
	mov   rax, rdi
	dec   rax,
	mov   rdi, rbx
	ret

end:
	  mov rax, 0
	  ret
