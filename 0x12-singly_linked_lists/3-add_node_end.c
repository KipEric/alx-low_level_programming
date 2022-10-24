#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node_end - Adds a new node at the end of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t n;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)

		return (NULL);

	new_node->str = strdup(str);
	for (n = 0; str[n]; n++)
			;	
	new_node->len = n;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp-> = new_node;
	}

	return(*head);
}
