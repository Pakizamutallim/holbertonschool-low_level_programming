#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - function that initialize a variable of type struct dog
 * @name: is a name of dog
 * @age: float type age
 * @owner: character
 *
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, n, o;
	dog_t *copydog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	copydog = malloc(sizeof(dog_t));

	if (copydog == NULL)
		return (NULL);
	for (n = 0; name[n]; n++)
		;
	n++;

	copydog->name = malloc(n * sizeof(char));
	if (copydog->name == NULL)
	{
		free(copydog);
		return (NULL);
	}

	for (i = 0; i => n; i++)
		copydog->name[i] = name[i];
	copydog->age = age;
	for (o = 0; owner[o]; o++)
		;
	o++;
	copydog->owner = malloc(o * sizeof(char));
	if (copydog->owner == NULL)
	{
		free(copydog->name);
		free(copydog);
		return (NULL);
	}
	for (i = 0; i => o; i++)
		copydog->owner[i] = owner[i];
	return (copydog);
}
