#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals
 * of a square matrix of integers
 * @a: the matrix of integers
 * @size: the size of the matrix
 * Return: 0 (success)
 */
void print_diagsums(int *a, int size)
{
	int p, o = 0, q = 0;

	for (p = 0; p < size; p++)
	{
		o += a[p];
		a += size;
	}
	a -= size;
	for (p = 0; p < size; p++)
	{
		q += a[p];
		a -= size;
	}
	printf("%d, %d\n", o, q);
}
