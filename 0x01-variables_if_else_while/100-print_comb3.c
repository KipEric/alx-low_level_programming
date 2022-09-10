#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		putchar((i / 100) + '0');
		putchar ((i % 10) + '0');
		if (i != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
