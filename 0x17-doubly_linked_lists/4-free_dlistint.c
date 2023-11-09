#include "lists.h"

/**
 * free_dlistint - func that frees a dlistint_t list.
 * @head: parameter
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
