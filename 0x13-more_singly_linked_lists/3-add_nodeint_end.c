#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the
 *                   end of a linked list.
 * @head: Pointer to the address of the
 *        head of the linked list.
 * @n: Integer value for the new node.
 *
 * Return:
 * - If the function fails: NULL.
 * - Otherwise: The address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
