#include "lists.h"

/**
 * free_dlistint - free all the elements in a dlistint_t list
 * @head: pointer to the first element in the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	free_dlistint(head->next);
	free(head);
}
