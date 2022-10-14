#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_string - print all supplied string
 * @separator: characters used to delimit
 * #n: number of items to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strg;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		strg = va_arg(ap, char *);
		(strg) ? printf("%s", strg) : printf ("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separtor);
	}
	printf("\n");
	va_end(ap);
}
