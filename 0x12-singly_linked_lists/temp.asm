section		.text
	extern	printf
	global	main
main:
	mov		edi, msg
	mov		edi, msg
	call	printf

section		.data
	msg	db	'Hello, Holberton',	0xa,	0
