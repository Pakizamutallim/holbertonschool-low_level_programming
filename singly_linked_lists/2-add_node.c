#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * @head: pointer
 * @str: pointer to duplicate
 * Return: new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0, i = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	while (!str[i])
	{
		i++;
		len++;
	}
	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
