#include "main.h"

/**
 * *malloc_checked - malloc pointer
 * @b: size to allocate
 *
 * Return: 0 on success
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit (98);
	else
		return (ptr);
}
