#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: parameter1
 * @idx: parameter2
 * @n: parameter3
 *
 * Return: address of new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *node = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; node && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		else
			node = node->next;
	}

	return (NULL);
}
