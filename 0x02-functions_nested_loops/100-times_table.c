#include "main.h"
/**
 * print_times_table - Prints the times table of the input, starting with 0
 * @n: The value of the times table to be printed
 */
void print_times_table(int n)
{
	int l, m, p;

	if (n >= 0 && n <= 15)
	{
	for (l = 0; l <= n; l++)
	{
	for (m = 0; m <= n; m++)
	{
	p = m * l;
	if (m == 0)
	{
		_putchar(p + '0');
	}
	else if (p < 10 && m != 0)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(p + '0');
	}
	else if (p >= 10 && p < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((p / 10) + '0');
		_putchar((p % 10) + '0');
	}
	else if (p >= 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar((p / 100) + '0');
		_putchar(((p / 10) % 10) + '0');
		_putchar((p % 10) + '0');
	}
	}
	}
	}
}
