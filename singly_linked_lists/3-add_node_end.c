#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* _strlen - Adds node to end of linked list
*
* @str: Pointer to struct pointer
*
* Return: Length of string
*/

int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}


/**
 * *add_node_end - check the code
 * @head: pointer
 * @str: pointer to duplicate
 * Return: new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *end;

	end = malloc(sizeof(list_t));
	
	if (end == NULL)
		return (NULL);
	end->str = new->str;
	end->len = strlen(str);
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
