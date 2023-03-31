#include "lists.h"

/**
 * list_len - return the number of elements in a linked list_t list
 * @h: pointer to list_t list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t number_of_elements = 0;

	if (h == NULL)
		return (number_of_elements);
	while (h->next != NULL)
	{
		number_of_elements += 2;
		h = h->next;
	}
	return (number_of_elements);
}
