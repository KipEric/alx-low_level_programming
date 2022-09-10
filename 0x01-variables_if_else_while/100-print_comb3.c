#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 * Return: 0
 */
int main(void)
{
	int i = '0';
	int x = '0';

	while (i <= '9')
	{
		while (x <= '9')
		{
			putchar(i);
			putchar(x);
			if (x == '9' && i == '9'
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			x++;
		}
		if (x >= '9')
		{
			x = '0';
		}
		i++;
	}
	return (0);
}
