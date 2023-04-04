#include "lists.h"

/**
 * free_listint - free listint_t elemnts and itself
 * @head: the list head, first node
 * Return: void
 */
void free_listint(listint_t *head)
{

	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
