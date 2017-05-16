global _ft_strlen

_ft_strlen: 

push rdi
cmp rdi, 0 ; si null rax = 0
je end
cmp byte [rdi], 0 ; si "" rax = 0
je end

push rbx
mov rbx, rdi            ; r9 = rdi
mov al, 0
cld; cherche \0
mov   rcx, 0xffffffff     ; the maximum number of bytes
repne scasb               ; while [rdi] != al,
	  sub   rdi, rbx            ; length = dist2 - dist1
	  mov   rax, rdi
	  dec	  rax,
	  mov rdi, rbx
	  pop rbx
	  pop rdi
	  ret

	  end:	pop rdi
	  mov rax, 0
	  ret
