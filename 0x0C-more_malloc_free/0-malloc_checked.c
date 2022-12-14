#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - malloc pointer
 * @b: size to allocate
 *
 * Return: ptr on success.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
