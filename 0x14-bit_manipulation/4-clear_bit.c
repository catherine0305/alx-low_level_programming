#include "main.h"
/**
 * clear_bit - sets bit value to 0 at index
 * @index: index
 * @n: number
 * Return: 1 or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
