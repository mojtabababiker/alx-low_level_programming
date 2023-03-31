#include "lists.h"

/**
 * free_list - free all elements of list_t list
 * @head: pointer to the first elements
 */
void free_list(list_t *head)
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
	free_list(head->next);
	free(head);
}
