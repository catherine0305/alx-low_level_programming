#include "main.h"
/**
 * *_strpbrk - searches for a string for any set of byte
 * @s: input
 * @accept: input
 * Return: always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
				return (s);
		}
		s++;
	}
	return ('\0');
}
