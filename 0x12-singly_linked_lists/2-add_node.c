#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: parameter1
 * @str: parameter2
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;

	while (str[i])
		i++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
