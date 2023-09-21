	global		main
	extern		printf
main:
	mov		edi, mes
	mov		eax, eax
	call		printf
	mov		eax, 0
	ret
mes: db 'Hello, Holberton\n',0
