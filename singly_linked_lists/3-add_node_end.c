#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node_end - check the code
 * @head: pointer
 * @str: pointer to duplicate
 * Return: new node.
 */

list_t *my_node(const char *str)
{
	list_t new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	return (new);
}

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = my_node(str);
	
	if (new == NULL)
		return (NULL);

	if(*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (head->next != NULL)
		head = head->next;
	head->next = new;
	return (new);
}
