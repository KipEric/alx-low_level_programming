#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string, followed by a new line.
 * @s: input string to print.
 *
 * Description: print a string
 * Return: no error
 */
void _puts(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		putchar(*(s + i));
		i++;
	}
	putchar(10);
}
