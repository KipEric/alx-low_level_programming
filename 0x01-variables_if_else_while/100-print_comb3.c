#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 * Return: 0
 */
int main(void)
{
	int i, x;

	for (i = 0; i < 9; i++)
	{
		for (x = 1; x < 9; x++)
			{
				if (x > i)
				{
					putchar(i + '0');
					putchar(x + '0');
					if (i != )
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	}
	putchar('\n');
	return (0);
}
