#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int m, cnt = 0;
	unsigned long int cm;

	for (m = 63; m >= 0; m--)
	{
		cm = n >> m;
		if (cm & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
