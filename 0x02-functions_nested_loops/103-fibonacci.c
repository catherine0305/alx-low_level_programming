#include <stdio.h>
/**
 * main - Finds and prints the sume of the even-valued terms
 * Return: always 0 (success)
 */
int main(void)
{
	int limit = 4000000;
	int a = 1;
	int b = 2;
	int next;
	int sum = 2;

	while (next <= limit)
	{
		next = a + b;
		if (next % 2 == 0)
			sum = sum + next;
		a = b;
		b = next;
	}
	printf("%d\n", sum);
	return (0);
}
