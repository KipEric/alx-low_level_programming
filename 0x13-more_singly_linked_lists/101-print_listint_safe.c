#include "lists.h"
/**
  * print_listint_safe - define function
  * @head: A pointer to the head of the listint_t to check.
  * Return: what does it return?
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr, *p;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	ptr = head->next;
	p = (head->next)->next;

	while (p)
	{
		if (ptr == p)
		{
			ptr = head;
			while (ptr != p)
			{
				nodes++;
				ptr = ptr->next;
				p = p->next;
			}
			ptr = ptr->next;
			while (ptr != p)
			{
				nodes++;
				ptr = ptr->next;
			}

			return (nodes);
		}

		ptr = ptr->next;
		p = (p->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
