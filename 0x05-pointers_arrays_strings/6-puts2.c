#include "main.h"
#include <stdio.h>
/**
 * puts2 - outputs every other character in a string
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
