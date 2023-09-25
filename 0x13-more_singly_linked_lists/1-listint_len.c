#include "lists.h"

/**
 * listint_len - that returns the number of
 * elements in a linked listint_t list.
 * @h: parameter
 *
 * Return: returns the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
