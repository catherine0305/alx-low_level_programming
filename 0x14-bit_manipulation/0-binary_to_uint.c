#include "main.h"
/**
 * binary_to_unit - converts binary number to unsigned int
 * @b: string
 * Return: converted number or 0 if b is NULL or
 * if number is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int n = 0;

	if (!b)
		return (0);
	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		n = 2 * n + (b[m] - '0');
	}
	return (n);
}
