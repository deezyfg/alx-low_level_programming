#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: Pointer to the address of the
 *        head of the listint_t linked list.
 * Return:
 * - If the list is not looped: 0.
 * - Otherwise: The number of unique nodes in the linked list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *cat, *dog;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	cat = head->next;
	dog = (head->next)->next;

	while (dog)
	{
		if (cat == dog)
		{
			cat = head;
			while (cat != dog)
			{
				nodes++;
				cat = cat->next;
				dog = dog->next;
			}

			cat = cat->next;
			while (cat != dog)
			{
				nodes++;
				cat = cat->next;
			}

			return (nodes);
		}

		cat = cat->next;
		dog = (dog->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to the address of
 *     the head of the listint_t linked list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: Frees the entire linked list and sets the head pointer to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
