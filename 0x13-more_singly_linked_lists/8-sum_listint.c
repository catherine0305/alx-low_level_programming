#include "lists.h"
/**
 * sum_listint - returns the sum of all the data of listint_t list
 * @head: pointer to the listint_t list
 * Return: sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *temp = head;

	while (temp)
	{
		s += temp->n;
		temp = temp->next;
	}
	return (s);
}
