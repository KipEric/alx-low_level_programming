#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - get length of a string
 * @s: The string to be modified
 *
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)

	return (i);
}

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char a;

	len = _strlen(s) - 1;
	for (i = len; i > len / 2; i--)
	{
		a = s[i];
		s[i] = s[len - i];
		s[len - i] = a;
	}
}
