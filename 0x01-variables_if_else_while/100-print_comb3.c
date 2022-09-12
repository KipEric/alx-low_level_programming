#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 * Return: 0
 */
int main(void)
{
	int i, x;

	for (i = 48; i < 58; i++)
	{
		for (x = 48; x < 58; x++)
			{
				if (i != x || i < x)
				{
					putchar(i);
					putchar(x);
					if (x == 57 && i == 56)
					{
					       	break;
					}
						putchar(',');
						putchar(' ');
					
				}
			}
	}
	putchar('\n');
	return (0);
}
