#include "main.h"
/**
 * get_bit - returns bit value at index
 * @index: index
 * @n: number
 * Return: value of bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int h;

	if (index > 63)
		return (-1);
	h = (n >> index) & 1;

	return (h);
}
