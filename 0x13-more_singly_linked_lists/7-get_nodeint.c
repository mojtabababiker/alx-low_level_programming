#include "lists.h"

/**
 * get_nodeint_at_index - as the name said, get a node at specific postion
 * @head: listin_t head
 * @index: postion of the node
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	for (i = 0 ; i < index ; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	node = head;
	head = temp;
	return (node);
}
