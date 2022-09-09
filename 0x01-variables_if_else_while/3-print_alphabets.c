#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, then in uppercase.
 * Description: printing alphabets
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';
	char b = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return 0;
}
