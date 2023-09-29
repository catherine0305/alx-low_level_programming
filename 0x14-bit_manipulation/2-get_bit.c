#include "main.h"
/**
 * get_bit - returns value of bit at a given index
 * @index: index of the bit
 * @n: number to search
 * Return: value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int h;

	if (index > 63)
		return (-1);
	h = (n >> index) & 1;

	return (h);
}
