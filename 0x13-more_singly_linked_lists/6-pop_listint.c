#include "lists.h"

/**
 * pop_listint - return the head value and remove it from the list
 * @head: pointer to head address
 * Return:the value of head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head == NULL)
		return (0);
	value = (*head)->n;
	temp = (*head)->next;
	(*head)->next = NULL;
	free(*head);
	*head = NULL;
	*head = temp;
	return (value);
}
