#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Pointer to a newly allocated space in memory.
 * @str: String  pointer.
 *
 * Return: The string duplicated.
 */
char *_strdup(char *str)
{
	int n = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;
	s = malloc ((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);
	while (n < i)
	{
		s[n] = str[n];
		n++;
	}
	s[n] = '\n';
	return (s);
}
