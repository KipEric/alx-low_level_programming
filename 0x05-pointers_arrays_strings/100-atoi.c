#include "main.h"
/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int signs = 0;
	unsigned int sum= 0;
	int final = 0;

	for (; *s != '\0'; s++)
	{
		if (*s == '-')
			signs *= -1;
		else if (*s >= '0' && *s <= '9')
			break;
	}
	while (*s >= '0' && *s <= '9')
	{
		sum *= 10;
		sum += *s - '0';
		s++;
	}
	if (signs == -1)
		final = -sum;
	else
		final = sum;
	return (final);
}
