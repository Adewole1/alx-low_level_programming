        global   main

          extern    printf

main:

          mov   edi, greetings

          xor   eax, eax

          call  printf

          mov   eax, 0

          ret

greetings: db `Hello, Holberton\n`,
