#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - Returns the number of elements in a linked list.
  * @h: Pointer to the head of the linked list.
  *
  * Return: The number of elements in a linked list.
  */
size_t list_len(const list_t *h)
{
	size_t index = 0;

	while (h)
	{
		h = h->next;
		index++;
	}

	return (index);
}
