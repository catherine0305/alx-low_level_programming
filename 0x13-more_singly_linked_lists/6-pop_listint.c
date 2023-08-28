#include "lists.h"
/**
 * pop_listint - deletes the head of a node listint_t linked list
 * @head: pointer to the first element in the list
 * Return: head node's data or 0 if list in empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int z;

	if (!head || !*head)
		return (0);
	z = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (z);
}
