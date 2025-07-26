#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int r;
	list_t *newnodo;
	list_t *end = *head;

	for (r = 0; str[r] != '\0'; r++)
	{
	}
	newnodo = malloc(sizeof(list_t));
		if (newnodo == NULL)
		{
			return (NULL);
		}

	newnodo->str = strdup(str);
	newnodo->len = r;
	newnodo->next = NULL;
	if (*head == NULL)
	{
		*head = newnodo;
	}
	else
	{
		while (end->next != NULL)
		{
			end = end->next;
		}

		end->next = newnodo;
	}
	return (newnodo);
}
