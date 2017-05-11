section .data
; define your global initialized variables here, if any
hello:
	.string db "Hello Word",10,0
	.len equ $ - hello.string


section .text
	global start
	global _main
	extern _printf

start:
	call _main
	ret

_main:
	lea rdi, [rel hello.string]
	call _printf
	leave
	ret

