#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *freelist;

	if (head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		freelist = head;
		head = *head->next;
		free(freelist);
	}
}
