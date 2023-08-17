#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of dlistint_t list
 * @head: pointer to the first node in the list
 * @index: the index of the wanted list
 * Return: pointer to -index-th node, or NULL if it dosen't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp, *node;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	temp = head;
	i = 0;
	while (i < index)
	{
		if (head == NULL)
		{
			head = temp;
			return (NULL);
		}
		head = head->next;
		i++;
	}
	node = head;
	head = temp;
	return (node);
}
