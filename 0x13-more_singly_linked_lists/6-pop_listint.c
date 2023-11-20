#include "lists.h"

/**
 * pop_listint - Deletes the head node of a lined list.
 * @head: Pointer to the address of the
 *        head of the linked list.
 *
 * Return:
 * - If the linked list is empty: 0.
 * - Otherwise: The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
