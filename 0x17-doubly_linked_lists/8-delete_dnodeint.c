#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node form a  lnked list
 *                            at a given index
 * @head: pointer to the first node in the linked list
 * @index: postion of the node in the linked list
 * Return: 1 in success, -1 in failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	while (index-- > 0)
	{
		if (*head == NULL)
		{
			*head = temp;
			return (-1);
		}
		*head = (*head)->next;
	}
	if ((*head)->next != NULL)
		(*head)->next->prev = (*head)->prev;

	if ((*head)->prev != NULL)
		(*head)->prev->next = (*head)->next;
	else
		temp = temp->next;
	(*head)->next = NULL;
	(*head)->prev = NULL;
	free(*head);
	*head = NULL;
	*head = temp;
	return (1);
}
