# 0x15. C - File I/O

## Resources

### Read or watch:


    File descriptors
    C Programming in Linux Tutorial #024 - open() read() write() Functions

### man or help:


    open
    close
    read
    write
    dprintf

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General


    Look for the right source of information online
    How to create, open, close, read and write files
    What are file descriptors
    What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
    How to use the I/O system calls open, close, read and write
    What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
    What are file permissions, and how to set them when creating a file with the open system call
    What is a system call
    What is the difference between a function and a system call

## Requirements

### General


    Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 14.04 LTS
    Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
    All your files should end with a new line
    A README.md file, at the root of the folder of the project is mandatory
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    You are not allowed to use global variables
    No more than 5 functions per file
    The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc is forbidden
    Allowed syscalls: read, write, open, close
    You are allowed to use _putchar
    You dont have to push _putchar.c, we will use our file. If you do it wont be taken into account
    In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you dont have to push them to your repo (if you do we wont take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
    The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called holberton.h
    Dont forget to push your header file
    All your header files should be include guarded
    Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...

| TASKS                 | DESCRIPTION                                                                |
|-----------------------|----------------------------------------------------------------------------|
|0-read_textfile.c      | function that reads a text file and prints it to the POSIX standard output.|
|1-create_file.c        | function that creates a file.                                              |
|2-append_text_to_file.c| function that appends text at the end of a file.                           |
|3-cp.c                 | program that copies the content of a file to another file.                 |
