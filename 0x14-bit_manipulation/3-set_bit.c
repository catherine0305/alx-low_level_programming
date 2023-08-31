#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: indexstarting from 0 of the bit i want to set
 * @n: pointer to the number to change
 * Return: 1 if successful or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
