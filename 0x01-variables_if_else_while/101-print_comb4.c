#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 * Return:0
 */
int main(void)
{
	int i, x, y;
	
	for (i = 0; i < 8; i+)
	{
		i = i + 1;
		for  (x = i; x < 9; x++)
		{
			x = x + 1;
			for (y = x; y < 10; y++)
			{
				putchar((i % 10) + '0');
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');

				if (i == 7 && x == 8 && y == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
