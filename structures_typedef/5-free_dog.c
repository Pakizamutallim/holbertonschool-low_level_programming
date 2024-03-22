#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that initialize a variable of type struct dog
 * @d: pointer
 *
 * Return: Always 0.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d);
		free(d->owner);
	}
}
