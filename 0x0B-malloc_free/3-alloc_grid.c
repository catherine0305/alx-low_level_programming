#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns pointer to a 2 dimensional array of integers
 * @width: input
 * @height: input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **duh;
	int l, m, n, o;

	if (width <= 0 || height <= 0)
		return (NULL);
	duh = malloc(sizeof(int *) * height);
	if (duh == NULL)
	{
		free(duh);
		return (NULL);
	}
	for (l = 0; l < height; l++)
	{
		duh[l] = malloc(sizeof(int) * width);
		if (duh[l] == NULL)
		{
			for (m = l; m >= 0; m--)
			{
				free(duh[m]);
			}
			free(duh);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (o = 0; o < width; o++)
		{
			duh[n][o] = 0;
		}
	}
	return (duh);
}
