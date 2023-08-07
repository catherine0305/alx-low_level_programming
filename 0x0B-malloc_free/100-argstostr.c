#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - coverts params passed to the program to string
 * @ac: input
 * @av: input
 * Return: pointer to new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int p = 0, q = 0, r = 0, s = 0;
	char *t;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (q < ac)
	{
		while (av[q][r])
		{
			p++;
			r++;
		}
		r = 0;
		q++;
	}
	t = malloc((sizeof(char) * p) + ac + 1);
	q = 0;
	while (av[q])
	{
		while (av[q][r])
		{
			t[s] = av[q][r];
			s++;
			r++;
		}
		t[s] = '\n';
		s++;
		q++;
	}
	s++;
	t[s] = '\0';
	return (t);
}
