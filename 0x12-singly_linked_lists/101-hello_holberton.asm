section		.text
	extern	printf
	global	main

main:
	mov		edi, mes
	mov		eax, 0
	call	printf

section		.data
	mes: db 'Hello, Holberton', 0xa, 0
