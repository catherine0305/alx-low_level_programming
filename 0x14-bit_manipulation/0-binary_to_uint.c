#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to the string
 * Return: converted number or 0 if b is NULL
 * or there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int new_m = 0;

	if (!b)
		return (0);
	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		new_m = 2 * new_m + (b[m] - '0');
	}
	return (new_m);
}
