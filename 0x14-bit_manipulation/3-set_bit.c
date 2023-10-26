#include "main.h"
/**
 * set_bit - sets bit value to 1 at index
 * @index: index
 * @n: number
 * Return: 1 or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
