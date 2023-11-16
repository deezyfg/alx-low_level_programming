#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node_end - Adds a new node at the end of a linked list.
  * @head: Pointer to the original linked list.
  * @str: The string to add to the node.
  *
  * Return: The address of the new list or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *new_node;

	if (str != NULL)
	{
		new_list = malloc(sizeof(list_t));
		if (new_list == NULL)
			return (NULL);

		new_list->str = strdup(str);
		new_list->len = _strlen(str);
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head  = new_list;
			return (*head);
		}
		else
		{
			new_node = *head;
			while (new_node->next)
				new_node = new_node->next;

			new_node->next = new_list;
			return (new_node);
		}
	}

	return (NULL);
}

/**
  * _strlen - Returns the length of a string.
  * @s: String to count.
  *
  * Return: The length of the string.
  */
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
