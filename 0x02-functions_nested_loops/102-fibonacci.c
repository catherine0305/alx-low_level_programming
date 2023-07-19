#include <stdio.h>
/**
 * main - Prints the first 52 Fibonacci numbers
 * Return: Nothing
 */
int main(void)
{
	int i = 0;
	long d = 1; j = 2;

	while (i < 50)
	{
		if (i == 1)
			printf("%ld", d);
		else if (i == 2)
			printf(", %ld", j);
		else 
		{
			j += d;
			d = j - d;
			printf(", %ld", j);
		}
		++i;
	}
	printf('\n');
	return (0);
}
