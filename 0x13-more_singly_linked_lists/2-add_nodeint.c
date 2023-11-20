#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 *               of a linked list.
 * @head: Pointer to the address of the
 *        head of the linked list.
 * @n: The integer value for the new node.
 *
 * Return:
 * - If the function fails: NULL.
 * - Otherwise: The address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
