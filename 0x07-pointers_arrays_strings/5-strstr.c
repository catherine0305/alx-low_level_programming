#include "main.h"
/**
 * *_strstr - function that locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to be located
 * Return: always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	int m;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		m = 0;

		if (haystack[m] == needle[m])
		{
			do {
				if (needle[m + 1] == '\0')
					return (haystack);
				m++;
			} while (haystack[m] == needle[m]);
		}
		haystack++;
	}
	return ('\0');
}
