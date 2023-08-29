#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the nodes at index
 * index of a listint_t linked list
 * @head: pointer to the first element in the linked list
 * @index: index of the node to delete
 * Return: 1 if it succeeded and -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *cur = NULL;
	unsigned int m = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (m < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		m++;
	}
	cur = temp->next;
	temp->next = cur->next;
	free(cur);
	return (1);
}
