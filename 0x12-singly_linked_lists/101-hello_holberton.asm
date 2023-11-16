section .data
    hello_msg db 'Hello, Holberton', 10, 0  ; Message to be printed followed by newline

section .text
    global _start_func ; Custom entry point label

    extern printf

_start_func: 
    ; Prepare arguments to call printf
    mov edi, hello_msg  ; Load the address of the string into edi as the first argument
    xor eax, eax        ; Clear eax register
    call printf         ; Call the printf function

    ; Exit the program
    mov eax, 60         ; System call number for sys_exit
    xor edi, edi        ; Exit code 0
    syscall             ; Make the system call to exit

