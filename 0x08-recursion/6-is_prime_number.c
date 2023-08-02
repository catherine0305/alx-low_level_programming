#include "main.h"
/**
 * prime_a - calculate if its a prime
 * @a: input
 * @b: divisor
 * Return: 0 success
 */
int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}
/**
 * is_prime_number - detects if integer is a prime number
 * @n: input
 * Return: 1 if integer is prime number and 0 if not
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
