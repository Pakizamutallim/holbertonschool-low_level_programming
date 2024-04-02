#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
       list_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
