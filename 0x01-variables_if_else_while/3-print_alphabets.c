#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, then in uppercase.
 * Description: printing alphabets
 * Return: 0 on success
 */
int main(void)
{
	char ch;
	
	for (ch = 'a' ; ch <= z ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
