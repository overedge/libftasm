global _ft_isspace

section .text
	_ft_isspace: cmp rdi, ' '
				 je end
				 cmp rdi, 12
				 je end
				 cmp rdi, 10
				 je end
				 cmp rdi, 13
				 je end
				 cmp rdi, 11
				 je end
				 cmp rdi, 9
				 je end
				 mov rax, 0
				 ret

	end:		 mov rax, 1
				 ret
