global _ft_strlen

section .text
_ft_strlen: mov r8,  0
			mov r9, rdi

while:		cmp r9, 0x00
			je end
			cmp byte [r9], 0x00
			je end
			inc r8
			inc r9
			jmp while

end: mov rax, r8
	 ret
