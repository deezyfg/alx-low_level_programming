#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 *
 * @head: Pointer to the head of the doubly linked list.
 * Return: No return value.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
