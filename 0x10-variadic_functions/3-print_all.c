#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - function that prints the char type
 * @types_format: arguments from va_list
 *
 */

void print_char(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}

/**
 * print_int - function that prints the integer type
 * @types_format: arguments from va_list
 *
 */

void print_int(va_list arguments)
{
	printf("%d", va_arg(arguments, int));
}

/**
 * print_float - function that prints the float type
 * @types_format: arguments from va_list
 *
 */

void print_float(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}

/**
 * print_string - function that prints the string type
 * @types_format: arguments from va_list
 *
 */

void print_string(va_list arguments)
{
	printf("%s", va_arg(arguments, char *));
}

/**
 * print_all - function that prints all type the arguments
 * @format: first value
 * @char: second value
 *
 */

void print_all(const char * const format, ...)
{
	va_list arguments;
	typeprint_t types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i = 0, j = 0;

	va_start(arguments, format);
	while (format[j] != '\0')
	{
		while (types[i].type_p)
		{
			if (*(types[i].type_p) == format[j])
				types[i].function(arguments);
			i++;
		}
		i = 0;
		j++;
	}
	va_end(arguments);
	printf("\n");
}
