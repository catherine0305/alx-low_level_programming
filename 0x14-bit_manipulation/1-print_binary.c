#include "main.h"
/**
 * print_binary - prints binary repo of number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int a, b = 0;
	unsigned long int c;

	for (a = 63; a >= 0; a--)
	{
		c = n >> a;
		if (c & 1)
		{
			_putchar('1');
			b++;
		}
		else if (b)
			_putchar('0');
	}
	if (!b)
		_putchar('0');
}
