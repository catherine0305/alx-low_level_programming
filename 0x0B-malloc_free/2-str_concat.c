#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input
 * @s2: input
 * Return: concate of s1 and s2
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *dd;
	int i, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = m = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[m] != '\0')
		m++;
	dd = malloc(sizeof(char) * (i + m + 1));
	if (dd == NULL)
		return (NULL);
	i = m = 0;
	while (s1[i] != '\0')
	{
		dd[i] = s1[i];
		i++;
	}
	while (s2[m] != '\0')
	{
		dd[i] = s2[m];
		i++, m++;
	}
	dd[i] = '\0';
	return (dd);
}
