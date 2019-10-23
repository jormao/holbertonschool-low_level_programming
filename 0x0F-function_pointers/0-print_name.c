#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that print a name
 * @name: first value
 * @f: function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
