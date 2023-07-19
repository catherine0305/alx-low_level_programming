#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers
 * Return: Nothing
 */
int main(void)
{
	int i = 0;
	long d = 1; e = 2;

	while (i < 50)
	{
		if (i == 1)
			printf("%ld", d);
		else if (i == 2)
			printf(", %ld", e);
		else 
		{
			e += d;
			d = e - d;
			printf(", %ld", e);
		}
		++i;
	}
	printf('\n');
	return (0);
}
