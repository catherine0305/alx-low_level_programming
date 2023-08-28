#include "lists.h"
/**
 * add_nodeint_end - adds new node at end of listint_t list
 * @head: pointer to first element in list
 * @n: input in new node
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nn;
	listint_t *temp = *head;

	nn = malloc(sizeof(listint_t));
	if (!nn)
		return (NULL);
	nn->n = n;
	nn->next = NULL;

	if (*head == NULL)
	{
		*head = nn;
		return (nn);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = nn;
	return (nn);
}
