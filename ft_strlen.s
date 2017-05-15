global _ft_strlen

_ft_strlen: 

			cmp rdi, 0 ; si null rax = 0
			je end
			cmp byte [rdi], 0 ; si "" rax = 0
			je end

			mov rbx, rdi            ; r9 = rdi
			 mov al, 0              ; cherche \0
			 repne scasb               ; while [rdi] != al,
			sub   rdi, rbx            ; length = dist2 - dist1
			mov   rax, rdi
			dec	  rax,
			mov rdi, rbx
			ret

end:	mov rax, 0
		ret
;global _ft_strlen

;section .text
;_ft_strlen: mov r8,  0
;			mov r9, rdi

;while:		cmp r9, 0x00
;			je end
;			cmp byte [r9], 0x00
;			je end
;			inc r8
;			inc r9
;			jmp while

;end: mov rax, r8
;	 ret
