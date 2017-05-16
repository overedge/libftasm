global _ft_memset
; void *ft_memset(void *s, int c, size_t n);
; rax			  rdi		rsi		 rdx 
; The ft_memset() function returns a pointer to the memory area s.
; 
_ft_memset: cld
			mov r8, rdi
			mov rcx, rdx
			mov al, sil
			rep stosb
			mov rax, r8
			ret

