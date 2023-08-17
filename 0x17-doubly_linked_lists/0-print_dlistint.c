#include "lists.h"

/**
 * print_dlistint - prints all the elements of dlistint_t list
 * @h: pointer to the first node in the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_num;

	node_num = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_num++;
	}
	return (node_num);
}
