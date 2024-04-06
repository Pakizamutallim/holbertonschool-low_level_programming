

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: A pointer
 * @index: is the index, starting from 0
 *
 * Return: -1 or 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
