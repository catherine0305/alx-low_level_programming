#include <stdio.h>
/**
 * main - Prints the numbers from 1 to 100
 * for multiples of 3 prints Fizz
 * for multiples of 5 prints Buzz and FizzBuzz for multiples of both
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	putchar('\n');
	return (0);
}
