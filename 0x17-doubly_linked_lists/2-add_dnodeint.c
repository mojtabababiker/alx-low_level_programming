#include "lists.h"

/**
 * add_dnodeint - add a node to dlistint_t list
 * @head: a pointer to the first node in the list
 * @n: the value of the new node
 * Return: a dlistint_t pointer of the new node, or NULL in fialuer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t *));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (head != NULL && *head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
