#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "\0";
    char *f;

    f = _strchr(s, '-');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
