#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints out the second half of the string
 * if odd len, start at (len - 1) / 2
 * @str: string to print half
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, j, k;

	i = strlen(str);
	if (i % 2 == 1)
		j = i / 2 + 1;
	else
		j = i / 2;
	for (k = j; k < i; k++)
		putchar(str[k]);
	putchar('\n');
}
