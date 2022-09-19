#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - prints a string, followed by a new line.
 * @s: input string to print.
 *
 * Description: print in reverse
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = strlen(s);

	while (i--)
		putchar(*(s + i));
	putchar(10);
}
