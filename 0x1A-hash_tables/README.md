# C - Hash tables

## Resources

### Read or watch:


    What is a HashTable Data Structure - Introduction to Hash Tables , Part 0
    Hash function
    Hash table
    Hash Functions

## Learning Objectives

### General


    What is a hash function
    What makes a good hash function
    What is a hash table, how do they work and how to use them
    What is a collision and what are the main ways of dealing with collisions in the context of a hash table
    What are the advantages and drawbacks of using hash tables
    What are the most common use cases of hash tables


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
    You are allowed to use the C standard library
    The prototypes of all your functions should be included in your header file called hash_tables.h
    Don’t forget to push your header file
    All your header files should be include guarded


## More Info

### Data Structures

I use these data structures for this project:

```
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

## Python Dictionaries

Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type d = {'a': 1, 'b': 2}, but everything looks so simple for the user. Python doesn’t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about how dictionaries are implemented in Python 2.7 (not mandatory).

Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table

| TASK | DESCRIPTION |
| ---------------------| --------------------------|
| 0-hash_table_create.c | function that creates a hash table.|
| 1-djb2.c | hash function implementing the djb2 algorithm.|
| 2-key_index.c | function that gives you the index of a key.|
| 3-hash_table_set.c | function that adds an element to the hash table.|
| 4-hash_table_get.c | function that retrieves a value associated with a key.|
| 5-hash_table_print.c | function that prints a hash table.|
| 6-hash_table_delete.c | function that deletes a hash table.|
| 100-sorted_hash_table.c | In PHP, hash tables are ordered |