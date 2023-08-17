#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of the list
 * @head: pointer for the first node in th list
 * @n: new node value
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (head == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	temp = *head;
	while ((*head)->next != NULL)
		*head = (*head)->next;
	(*head)->next = new;
	new->prev = *head;
	*head = temp;
	return (new);
}
