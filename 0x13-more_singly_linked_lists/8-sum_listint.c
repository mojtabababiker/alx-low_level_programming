#include "lists.h"

/**
 * sum_listint - sum all the data(n) from all the list elements
 * @head: pointer to the first node in the list
 * Return: summation of all the data(n) in the list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	temp = head;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	head = temp;
	return (sum);
}
