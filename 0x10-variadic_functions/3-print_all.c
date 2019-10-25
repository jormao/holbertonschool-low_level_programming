#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - function that print all
 * @format: first value
 * @char: second value
 *
 */

void print_all(const char * const format, ...)
{
	va_list arguments;
		typeprint_t types[] = {
		{"c", "%c", char},
		{"i", "%i", int},
		{"f", "%f", float},
		{"s", "%s", char},
		{NULL, NULL}
	};
	int i = 0, j = 0;

	va_start(arguments, format);
	while (i < 4)
	{
		if (types[i].type_p == format[j])
			printf(char *(types[i].f), va_arg(arguments, types[i].type_c )
		i++;
	}
	va_end(arguments);
	printf("\n");
}
