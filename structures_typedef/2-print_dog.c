#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
		{
			printf("%s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %.6f\n", d->age);
		if(d->owner != NULL)
		{
			printf("%s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
