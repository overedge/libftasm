global _ft_strcat

section .text
	_ft_strcat:	mov r8, rdi; r8 = dest
				mov r9, rsi; r9 = src
				mov r15, rdi; copy dest

	_while_dest_end: cmp r8, 0x00
					je write
					cmp byte [r8], 0x00
					je write
					inc r8
					jmp _while_dest_end
	
	write:			cmp r9, 0x00
					je end
					cmp byte [r9], 0x00
					je end
					mov rbx, [r9]
					mov [r8], rbx
					inc r8
					inc r9
					jmp write

	end: mov rax, r15
		ret

