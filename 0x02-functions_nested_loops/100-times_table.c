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
			_putchar(48);
			for (m = 1; m <= n; m++)
			{
				p = l * m;
				_putchar(44);
				_putchar(32);
				if (p <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(p + 48);
				}
				else if (p <= 99)
				{
					_putchar(32);
					_putchar((p / 10) + 48);
					_putchar((p % 10) + 48);
				}
				else
				{
					_putchar(((p / 100) % 10) + 48);
					_putchar(((p / 10) % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
