global _ft_memcpy
; void *ft_memcpy (void *dest, const void *src, size_t n);
; rax                   rdi         rsi               rdx
; The ft_memset() function returns a pointer to the memory area s.



_ft_memcpy: cmp rsi, 0
			je end
			cmp byte [rsi], 0
			je end
			cmp rdx, 0
			je end
			cld
			mov r9, rdi
			mov rcx, rdx
			rep movsb
			mov rax, r9
			ret

end: mov rax, rdi
	 ret
