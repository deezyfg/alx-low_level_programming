#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Adds a new node at the beginning of a linked list.
  * @head: Pointer to the original linked list.
  * @str: The string to add to the node.
  *
  * Return: The address of the new list or NULL if it failed.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head != NULL && str != NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);

		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = *head;

		*head = new_node;

		return (new_node);
	}

	return (0);
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
