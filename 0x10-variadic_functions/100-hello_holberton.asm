section .data

    message db "Hello, Holberton", 17

section .text

global main
_main:
    mov rax, 1
    mov rdi, 1
    lea rsi, message
    mov rdx, 17
    syscall

	mov rax, 60
    mov rdi, 0
    syscall