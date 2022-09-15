#include "main.h"
/**
 * more_numbers - prints the range 0-14 ten times.
 *
 * Return: nothing.
 */
void more_numbers(void)
{
	int i, j;

	i = 0

	while (i <= 9)
	{
		j = 0;

		while (j <= 14)
		{
			if (j >= 10)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
