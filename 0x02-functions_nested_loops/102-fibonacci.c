#include <stdio.h>
/**
 * main - Prints the first 52 Fibonacci numbers
 * Return: Nothing
 */
int main(void)
{
	int i = 0, j;
	long d = 1; j = 2;

	while (i < 50)
	{
		if (i == 1)
			printf("%ld", d);
		else if (i == 2)
			printf(", %d", j);
		else 
		{
			j += d;
			d = j - d;
			printf(", %d", j);
		}
		++i;
	}
	putchar('\n');
	return (0);
}
