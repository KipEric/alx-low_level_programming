#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string, followed by a new line.
 * @str: input string to print.
 *
 * Description: print a string
 * Return: no error
 */
void _puts(char *str)
{
	int i;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	putchar(10);
}
