#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - check the code
 * @head: a pointer
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *freelist;

	if (head == NULL)
		return;
	while (head)
	{
		freelist = head->next;
		free(head->str);
		free(head);
		head = freelist;
	}
}
