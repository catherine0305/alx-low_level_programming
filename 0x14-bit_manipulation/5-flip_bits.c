#include "main.h"
/**
 * flip_bits - returns number of bits we need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, b = 0;
	unsigned long int c;
	unsigned long int e = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		c = e >> a;
		if (c & 1)
			b++;
	}
	return (b);
}
