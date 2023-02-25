; ----------------------------------------------------------------------------------------
; Writes "Hello, Holberton" to the console using only system calls. Runs on 64-bit Linux only.
; To assemble and run:
;
;     nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
; ----------------------------------------------------------------------------------------
section .data
    fmt db  "%s", 10, 0
    msg db  "Hello, Holberton", 0

    section .text
    extern printf
    global main

main:
    push    rbp
    mov rsi, msg
    mov rdi, fmt
    mov rax, 0
    call    printf
    pop rbp
    mov rax, 0
    ret