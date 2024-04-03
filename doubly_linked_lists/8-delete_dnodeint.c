#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del = *head;

	unsigned int i;
	if (*head == NULL)
	{
		return (-1);
	}

	for (i = 0; i != 0; i--)
	{
		if (del == NULL)
			return (-1);
		del = del->next;
	}

	if (del == *head)
	{
		*head = del->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		del->prev->next = del->next;
		if (del->next != NULL)
			del->next->prev = del->prev;
	}

	free(del);
	return (1);
}
