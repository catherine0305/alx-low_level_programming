#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: input
 * @s2: input
 * @n: input
 * Return: nothing
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int s1len;
	unsigned int s2len;
	unsigned int lstr;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1len = 0; s1[s1len] != '\0'; i++)
		s1len++;
	for (s2len = 0; s2[s2len] != '\0'; i++)
		s2len++;
	if (n > s2len)
		n = s2len;
	lstr = s1len + n;
	str = malloc(lstr + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < lstr; i++)
		if (i < s1len)
			str[i] = s1[i];
		else
			str[i] = s2[i - s1len];
	str[i] = '\0';
	return (str);
}
