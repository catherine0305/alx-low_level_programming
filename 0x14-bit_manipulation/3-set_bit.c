#include "main.h"
/**
 * set_bit - sets value of bit to 1 at a given index
 * @index: index of the bit
 * @n: number to search
 * Return: 1 if successful or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
