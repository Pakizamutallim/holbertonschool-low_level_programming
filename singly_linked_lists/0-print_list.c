#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - list the code
 *
 * @*h: it is pointer
 *
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while(h != 0)
	{
		if(h->str == NULL)
			print("[%d]", "%s", 0, (nil));
		else
			print("[%d]", "%s", h->len, h->str);
		h = h->next;
		i++;
	}
}
