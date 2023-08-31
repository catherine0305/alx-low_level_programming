#include "main.h"
/**
 * flip_bits - returns number of bits you need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cnt = 0;
	unsigned long int curr;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = ex >> i;
		if (curr & 1)
			cnt++;
	}
	return (cnt);
}
