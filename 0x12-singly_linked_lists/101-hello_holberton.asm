section .data
        str: db "Hello, Holberton", 10,0

section .text
        global main

main:
        mov rax, 1
        mov rdi, 1
        mov rsi, str
        mov rdx, 17
        syscall
        ;return (0)
        mov rax, 60
        mov rdi, 0
        syscall
