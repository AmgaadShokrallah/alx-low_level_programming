#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: parameter
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
