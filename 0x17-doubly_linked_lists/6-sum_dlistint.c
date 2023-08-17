#include "lists.h"

/**
 * sum_dlistint - sum all the data in a dlistint_t linked list
 * @head: pointer to the first node
 * Return: result of the sumation
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	head = temp;
	return (sum);
}
