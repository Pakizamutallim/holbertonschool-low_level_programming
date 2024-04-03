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
	unsigned int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
* add_node_end - Adds node to end of linked list
*
* @head: Double Pointer
*
* @str: Pointer to struct pointer
*
* Return: address of the new element, or NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list, *end;

	end = malloc(sizeof(list_t));

	if (end == NULL)
	{
		return (NULL);
	}
	end->str = strdup(str);
	end->len = _strlen(str);
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
	}
	else
	{
		list = *head;

		while (list->next)
		{
			list = list->next;
		}
		list->next = end;
	}
	return (end);
}
