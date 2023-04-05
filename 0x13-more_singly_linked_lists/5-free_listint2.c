#include "lists.h"

/**
 * free_listint2 - free listint_t list and all its elemnts
 * @head: pointer to head node pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL || head == NULL)
		return;
	free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
