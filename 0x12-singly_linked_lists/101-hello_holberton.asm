greeting: db 'Hello, Holberton\n'

	global   main
	extern    printf

main:
	mov   edi, greeting
	xor   eax, eax
	call  printf
	mov   eax, 0
	ret
