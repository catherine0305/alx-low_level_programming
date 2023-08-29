#include "lists.h"
#include <stdio.h>
/**
 * looped_listint_len - counts number of unique nodes
 * in a looped listint_len list
 * @head: pointer to the looped list
 * Return: number of nodes or 0 if failed
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *cat, *mouse;
	size_t x = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	cat = head->next;
	mouse = (head->next)->next;

	while (mouse)
	{
		if (cat == mouse)
		{
			cat = head;
			while (cat != mouse)
			{
				x++;
				cat = cat->next;
				mouse = mouse->next;
			}
			cat = cat->next;
			while (cat != mouse)
			{
				x++;
				cat = cat->next;
			}
			return (x);
		}
		cat = cat->next;
		mouse = (mouse->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the listint_t linked list
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t x, index = 0;

	x = looped_listint_len(head);

	if (x == 0)
	{
		for (; head != NULL; x++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < x; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (x);
}
