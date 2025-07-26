#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	int r;
	list_t *newnode;

	for (r = 0; str[r] != '\0'; r++)
	{
	}
	newnode = malloc(sizeof(list_t));
		if (newnode == NULL)
		{
			return (NULL);
		}

	newnode->str = strdup(str);
	newnode->len = r;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
