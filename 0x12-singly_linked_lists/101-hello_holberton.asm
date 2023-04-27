section		.text
	extern printf
	global main
main:
	move		edi, msg
	mov		eax, 0
	call 	printf

section		.data
	msg db 'Hello, Holbeerton', Oxa, O
