#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: parameter1
 * @index: parameter2
 *
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *node = head;

	while (n < index)
	{
		if (node != NULL)
			node = node->next;
		else
			return (NULL);
		n++;
	}
	return (node);
}
