#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 * Return: 0
 */
int main(void)
{
	int i, x;

	while (i <= '9')
	{
		while (x <= '9')
		{
			if ( ! (i > x || i == x))
			{
				putchar(i);
				putchar(x);
				if (i == '8' && x == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			x++;
		}
		x = '0';
		i ++;
	}
	return (0);
}
