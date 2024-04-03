#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node.
 * @head: pointer.
 * @index: node.
 * Return: 0
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node 
	*node = head;
	unsigned int i = 0;

	while (node && i != index)
	{
		i++;
		node = node->next;
	}
	if (node && i == index)
		return (node);
	return (NULL);
}
