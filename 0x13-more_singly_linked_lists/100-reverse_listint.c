#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: parameter
 *
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL;
	listint_t *next = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = node;
		node = *head;
		*head = next;
	}
	*head = node;

	return (*head);
}
