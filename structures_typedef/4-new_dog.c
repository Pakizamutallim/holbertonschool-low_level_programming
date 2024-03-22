#include <stdio.h>
#include "dog.h"

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
	unsigned int i n o;
	dog_t *copydog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	copydog = malloc(sizeof(dog_t));

	if (copydog == NULL)
		return (NULL);


}
