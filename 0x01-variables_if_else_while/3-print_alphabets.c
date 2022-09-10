#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, then in uppercase.
 * Description: printing alphabets
 * Return: 0 on success
 */
int main(void)
{
	char b = 'a';
	char c = 'A';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
