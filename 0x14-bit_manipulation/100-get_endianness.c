#include "main.h"
/**
 * get_endianness - checks endianness
 * Return: 0 if big or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int m = 1;
	char *d = (char *) &m;

	return (*d);
}
