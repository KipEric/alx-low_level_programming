#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints a listint with newlines between
 * each node's value
 *
 * @h: head of list to print
 *
 * Return: length of list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t c = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		c++;
		ptr = ptr->next;
	}
	return (c);
}
