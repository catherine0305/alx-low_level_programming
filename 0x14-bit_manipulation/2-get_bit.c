#include "main.h"
/**
 * get_bit - returns value of a bit at a given index
 * @index: index of bit i want starting from 0
 * @n: number to search
 * Return: value of bit at index index or
 * -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bi;

	if (index > 63)
		return (-1);
	bi = (n >> index) & 1;
	return (bi);
}
