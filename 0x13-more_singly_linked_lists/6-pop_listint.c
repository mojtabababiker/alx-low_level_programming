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
	temp = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = temp;
	return (value);
}
