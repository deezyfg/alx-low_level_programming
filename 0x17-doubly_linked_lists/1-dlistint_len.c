#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in
 *			a double linked list
 *
 * @h: Pointer to the head of the doubly linked list.
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
