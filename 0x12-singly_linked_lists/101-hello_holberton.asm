section .data
    hello db "Hello, Holberton", 0Ah, 0

section .text
    global _start

_start:
    ; write "Hello, Holberton" to stdout
    push hello
    call printf
    add rsp, 8

    ; exit
    xor eax, eax
    mov ebx, eax
    inc eax
    int 0x80

