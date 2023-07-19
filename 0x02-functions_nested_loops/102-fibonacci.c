#include <stdio.h>
/**
 * main - Prints the first 52 Fibonacci numbers
 * Return: Nothing
 */
int main(void)
{
	unsigned long int j = 1;
	unsigned long int k = 2;
	unsigned long int next;
	int i;

	printf("%lu, ", j);
	for (i = 1; i < 50; i++)
	{
		printf("%lu", k);
		next = j + k;
		j = k;
		k = next;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
