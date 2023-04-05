#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at given index
 * @head: pointer to first node
 * @index: the given index
 * Return: 1 if it's success -1 other wise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev_node;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		temp = temp->next;

		(*head)->next = NULL;
		free(*head);
		*head = temp;
		return (1);
	}
	while (index)
	{
		if (*head == NULL)
			return (-1);
		prev_node = *head;
		*head = (*head)->next;
		index--;
	}
	prev_node->next = (*head)->next;
	(*head)->next = NULL;
	free(*head);
	*head = temp;
	return (1);
}
