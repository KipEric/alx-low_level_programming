#include <stdio.h>
/**
 * main - print alphabet in lowercase
 * description: program that prints the alphabet in lowercase
 * return: 0 if successful
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar("\n");
	return (0);
}
