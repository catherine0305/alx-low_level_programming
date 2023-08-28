#include "lists.h"
/**
 * add_nodeint - adds new node at beginning of a listint_t list
 * @head: pointer to the first node
 * @n: input to the new node
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn;

	nn = malloc(sizeof(listint_t));
	if (!nn)
		return (NULL);
	nn->n = n;
	nn->next = *head;
	*head = nn;

	return (nn);
}
