#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: index of the bit
 * @n: number to search for
 * Return: 1 if successful -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
