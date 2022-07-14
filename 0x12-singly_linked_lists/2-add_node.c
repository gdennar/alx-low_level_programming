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
	list_t *new_node;
	int i, len;
	char *cont;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	new_node = *head;

	cont = malloc((len + 1) * sizeof(char));
	if (cont == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		cont[i] = str[i];
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(cont);
		return (NULL);
	}

	new_node->len = len;
	new_node->str = cont;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * _strlen - returns length of string
 * @s: character of string
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i;

	while (s[i] != 0)
		i++;
	return (i);
}
