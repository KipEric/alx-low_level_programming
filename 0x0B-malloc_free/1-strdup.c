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
	char *p;
	unsigned int l, j;

	if (str == NULL)
		return (NULL);
	for (l = 0; str[l] != '\0'; l++)
		;
	l++;
	if (l < 1)
		return (NULL);
	p = malloc(l * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (j = 0; j < l; j++)
		p[j] = str[j];
	p[j] = '\0';
	return (p);
}
