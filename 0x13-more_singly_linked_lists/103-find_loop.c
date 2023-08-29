#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the fist node on the list
 * Return: address of the node where loop starts
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cat, *mouse;

	cat = head;
	mouse = head;

	while (head && cat && cat->next)
	{
		head = head->next;
		cat = cat->next->next;

		if (head == cat)
		{
			head = mouse;
			mouse = cat;
			while (1)
			{
				cat = mouse;
				while (cat->next != head && cat->next != mouse)
				{
					cat = cat->next;
				}
				if (cat->next == head)
					break;
				head = head->next;
			}
			return (cat->next);
		}
	}
	return (NULL);
}
