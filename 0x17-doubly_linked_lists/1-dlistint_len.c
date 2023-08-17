#include "lists.h"

/**
 * dlistint_len - get the length of dlistint_t list
 * @h: the first element in the list
 * Return: the length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
