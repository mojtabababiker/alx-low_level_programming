#include "lists.h"
/**
 * listint_len - calculate number of elements of list that h is its header
 * @h: pointer to the first node in the list
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t elem_num = 0;

	if (h == NULL)
	{
		return (elem_num);
	}
	while (h != NULL)
	{
		elem_num++;
		h = h->next;
	}
	return (elem_num);
}
