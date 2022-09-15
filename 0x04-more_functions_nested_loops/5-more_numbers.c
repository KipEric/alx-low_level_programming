#include "main.h"
/**
 * more_numbers - prints the range 0-14 ten times.
 *
 * Return: nothing.
 */
void more_numbers(void)
{
	char i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j / 10 > 0)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
