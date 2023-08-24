#include <stdlib.h>
#include "lists.h"
/**
 * lists_len - returns the number of elements in a linked list_t list
 * @h: pointer to the list_t list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
