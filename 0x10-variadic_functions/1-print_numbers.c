#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print all numbers
 * @seperator: character to delimit
 * @n: number of elements to print
 *
 * Return: void
 */
void print_numbers(const char *separetor, const unsigned int n, ...)
{
	unsigned int i;
	val_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (seperator != NULL && i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}
