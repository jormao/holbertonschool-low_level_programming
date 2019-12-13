# 0x17. C - Doubly linked lists

## Resources

### Read or watch:
What is a Doubly Linked List

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

What is a doubly linked list
How to use doubly linked lists
Start to look for the right source of information without too much help

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
The only C standard library functions allowed are malloc, free, printf and exit
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called lists.h
Don’t forget to push your header file
All your header files should be include guarded

## More Info

'''Please use this data structure for this project:
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;'''

|TASKS-------------------------------|DESCRIPTION-------------------------------------------------------------------|
|0-print_dlistint.c                  |function that prints all the elements of a dlistint_t list.                   |
|1-dlistint_len.c                    |function that returns the number of elements in a linked dlistint_t list.     |
|2-add_dnodeint.c                    |function that adds a new node at the beginning of a dlistint_t list.          |
|3-add_dnodeint_end.c                |function that adds a new node at the end of a dlistint_t list.                |
|4-free_dlistint.c                   |function that free a dlistint_t list.                                         |
|5-get_dnodeint.c                    |function that returns the nth node of a dlistint_t linked list.               |
|6-sum_dlistint.c                    |function that returns the sum of all the data (n) of a dlistint_t linked list.| 
|7-insert_dnodeint.c,2-add_dnodeint.c|function that inserts a new node at a given position.                         |
|8-delete_dnodeint.c                 |function that deletes the node at index index of a dlistint_t linked list.    |
