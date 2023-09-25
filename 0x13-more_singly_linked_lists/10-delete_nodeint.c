#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list.
 * @head: parameter1
 * @index: parameter2
 *
 * Return: 1 if it succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new_node;
	listint_t *node = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}

	while (node != NULL)
	{
		if (i == index)
		{
			new_node->next = node->next;
			free(node);
			return (1);
		}
		i++;
		new_node = node;
		node = node->next;
	}
	return (-1);
}
