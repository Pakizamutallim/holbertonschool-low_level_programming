#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *array;
	char *oldarr;
	if (new_size == old_size)
		return (ptr);

	if (!ptr)
		return (malloc(new_size));


	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	array = malloc(new_size);

	if (array == NULL)
	{
		return (NULL);
	}

	oldarr = array;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			array[i] = oldarr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			array[i] = oldarr[i];
	}
	free(ptr);
	return (array);
}
