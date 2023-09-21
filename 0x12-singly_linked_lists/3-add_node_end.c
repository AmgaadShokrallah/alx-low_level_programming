#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: parameter1
 * @str: parameter2
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head;
	list_t *new;
	int i = 0;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (current->next)
		current = current->next;

	current->next = new;

	return (new);
}
