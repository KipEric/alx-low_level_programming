#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copies n bytes from source memory to destination
 *
 * @dest: destination to write to
 * @src: source to copy from
 * @n: number of bytes to write
 *
 * Return: pointer to dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];

	return (dest);
}
