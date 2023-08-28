#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of listint_t list
 * @head: pointe to the first node of the listint_t list
 * @index: index of node starting at 0
 * Return: NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *temp = head;

	while (temp && m < index)
	{
		temp = temp->next;
		m++;
	}
	return (temp ? temp : NULL);
}
