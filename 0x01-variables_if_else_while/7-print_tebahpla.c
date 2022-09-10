#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse.
 * Return: 0
 */
int main(void)
{
	char b = 'z';

	while (b >= 'a')
	{
		putchar(b);
		b--;
	}
	putchar('\n');
	return (0);
}
