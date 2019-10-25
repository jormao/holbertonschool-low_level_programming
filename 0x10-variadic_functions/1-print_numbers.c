#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - function that print numbers
 * @n: first value
 * @separator: second value
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list to_print;
	unsigned int count = 0;

	va_start(to_print, n);
	for (; count < n; count++)
	{
		printf("%d", va_arg(to_print, unsigned int));
		if (separator != NULL && count != (n - 1))
			printf("%s", separator);
	}
	va_end(to_print);
	printf("\n");
}
