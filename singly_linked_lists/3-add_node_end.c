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

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;

	list_t *new, *end;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (*str != 0)
	{
		i++;
	}
	end = malloc(sizeof(list_t));
	
	if (end == NULL)
		return (NULL);
	end->str = new->str;
	end->len = i;
	end->next = NULL;
	if (*head == NULL)
		*head = end;
	else
	{
		new = *head;
		while (new->next)
			new = new->next;
		new->next = end;
	}
	return (end);
}

