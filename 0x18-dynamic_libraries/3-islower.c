#include "main.h"

/*
 *
 * main - Checks if a character is lowercase.
 *
 * Return: 0
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
