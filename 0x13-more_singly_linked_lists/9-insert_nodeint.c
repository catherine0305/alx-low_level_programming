#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the listint_t list
 * @idx: index where new node is added
 * @n: input
 * Return: address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *nn;
	listint_t *temp = *head;

	nn = malloc(sizeof(listint_t));
	if (!nn || !head)
		return (NULL);
	nn->n = n;
	nn->next = NULL;

	if (idx == 0)
	{
		nn->next = *head;
		*head = nn;
		return (nn);
	}
	for (m = 0; temp && m < idx; m++)
	{
		if (m == idx - 1)
		{
			nn->next = temp->next;
			temp->next = nn;
			return (nn);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
