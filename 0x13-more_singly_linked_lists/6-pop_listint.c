#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: parameter
 *
 * Return: returns the head node’s data (n).
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (*head == NULL)
		return (0);

	node = *head;
	n = node->n;
	*head = node->next;
	free(node);

	return (n);
}
