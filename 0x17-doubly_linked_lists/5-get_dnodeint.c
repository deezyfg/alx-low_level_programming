#include "lists.h"

/**
 * get_dnodeint_at_index -Returns the nth node of a
 *				dlistint_t linked list.
 *
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the desired node.
 * Return:
 * - A pointer to the nth node.
 * - If the node does not exist, returns NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
