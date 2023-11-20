#include "lists.h"

/**
 * find_listint_loop - Finds the loop in
 *                     a listint_t linked list.
 * @head: Pointer to the address of the
 *        head of the listint_t linked list.
 * Return:
 * - If there is no loop: NULL.
 * - Otherwise: The address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cat, *dog;

	if (head == NULL || head->next == NULL)
		return (NULL);

	cat = head->next;
	dog = (head->next)->next;

	while (dog)
	{
		if (cat == dog)
		{
			cat = head;

			while (cat != dog)
			{
				cat = cat->next;
				dog = dog->next;
			}

			return (cat);
		}

		cat = cat->next;
		dog = (dog->next)->next;
	}

	return (NULL);
}
