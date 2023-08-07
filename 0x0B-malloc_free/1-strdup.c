#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns pointer to a duplicate of string str
 * @str: the char
 * Return: 0 (success)
 */
char *_strdup(char *str)
{
	char *bb;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	bb = malloc(sizeof(char) * (i + 1));
	if (bb == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		bb[r] = str[r];
	return (bb);
}
