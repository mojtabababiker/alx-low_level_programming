#include "lists.h"

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
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		if (idx == 0)
		{
			new->next = NULL;
			new->prev = NULL;
			*h = new;
			return (new);
		}
		else
		{
			free(new);
			return (NULL);
		}
	}
	temp = *h;
	while (idx-- > 0)
	{
		if (*h == NULL)
		{
			*h = temp;
			free(new);
			return (NULL);
		}
		*h = (*h)->next;
	}
	new->next = *h;
	new->prev = (*h)->prev;
	(*h)->prev->next = new;
	(*h)->prev = new; /*set the new node as prev for head*/
	*h = temp;
	return (new);
}
