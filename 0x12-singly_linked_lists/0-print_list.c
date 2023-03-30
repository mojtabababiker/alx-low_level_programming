#include "lists.h"

/**
 * print_list - print all the elements of all list_t list
 * @h: pinter to list_t list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t number_of_nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[%u] %s\n", 0, "(nil)");
		number_of_nodes++;
		h = h->next;
	}
	return (number_of_nodes);
}
