#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of list_t
 * @head: header pointer
 * @str: string value
 * Return: addess of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new;

	if (!(head && str))
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	for (i = 0; str[i]; i++)
	{}
	new->str = strdup(str);
	if (!(new->str))
	{
		free(new);
		return (NULL);
	}
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
