#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to the listint_t list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t z = 0;

	while (h)
	{
		z++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (z);
}
