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
	int l, m;

	if (width <= 0 || height <= 0)
		return (NULL);
	duh = malloc(sizeof(int) * height);
	if (duh == NULL)
		return (NULL);
	for (l = 0; l < height; l++)
	{
		duh[l] = malloc(sizeof(int) * width);
		if (duh[l] == NULL)
		{
			for (; l >= 0; l--)
				free(duh[l]);
			free(duh);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (m = 0; m < width; m++)
			duh[l][m] = 0;
	}
	return (duh);
}
