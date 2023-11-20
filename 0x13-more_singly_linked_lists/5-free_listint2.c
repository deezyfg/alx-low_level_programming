#include "lists.h"

/**
 * free_listint2 - Frees a linked list.
 * @head: Pointer to the address of the
 *        head of the linked list.
 *
 * Description:
 * Frees the entire linked list and sets the head pointer to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
