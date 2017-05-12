global _ft_bzero

section .text

_ft_bzero:	mov r15, rdi
			mov r9, 0
			
while:		cmp rsi, r9 
			je end
			mov byte [r15], 0
			inc r9
			inc r15
			jmp while

end: ret
