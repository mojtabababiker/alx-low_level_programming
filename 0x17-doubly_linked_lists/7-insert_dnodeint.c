#include "lists.h"

/**
 * insert_node - add node before the h node
 * @h: the node that will be insert before
 * @n: the data of the new node
 * Return: a dlistin_t pointer of the new node, or NULL in failure
 */
dlistint_t *insert_node(dlistint_t **h, int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *h;
	new->prev = (*h)->prev;
	(*h)->prev->next = new;
	(*h)->prev = new; /*set the new node as prev for head*/
	return (new);
}

/**
 * insert_dnodeint_at_index - insert node at given postion
 * @h: pointer of the first node
 * @idx: the required index for the new node
 * @n: the new node data
 * Return: a pointer to the new node, or NULL in failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;

	if (h == NULL)
		return (NULL);
	if (*h == NULL && idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	else if (*h == NULL)
		return (NULL);
	temp = *h;
	while (idx-- > 0)
	{
		if (*h == NULL)
		{
			*h = temp;
			return (NULL);
		}
		if ((*h)->next == NULL && idx == 0)
		{
			new = add_dnodeint_end(h, n);
			*h = temp;
			return (new);
		}
		*h = (*h)->next;
	}
	if ((*h)->prev == NULL)
	{
		new = add_dnodeint(h, n);
		if (new)
			temp = new;
		*h = temp;
		return (new);
	}
	new = insert_node(h, n);
	*h = temp;
	return (new);
}
