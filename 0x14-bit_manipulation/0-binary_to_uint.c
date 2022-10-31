#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int l, m;

	if (!b)
		return (0);

	n = 0;

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, m = 1; l >= 0; l--, m *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}

		if (b[l] & 1)
		{
			n += m;
		}
	}

	return (n);
}
