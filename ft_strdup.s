global _ft_strdup
extern _malloc
extern _ft_memcpy
extern _ft_strlen

segment .text
	_ft_strdup:
	mov r15, rdi
	call _ft_strlen
	mov rdi, rax
	add rdi, 1
	push rdi
	call _malloc
	cmp rax, 0
	je end
	mov rdi, rax
	mov rsi, r15
	pop rdx
	call _ft_memcpy

	end:
	ret
