#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * int sum_them_all - summ all arguments
 * @n: number of arguments
 * @...: variable  list of arguments
 *
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = sum = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
