#include "lists.h"

/**
 * add_nodeint_end - add new node to the end if the list
 * @h: address of the list head pointer
 * @n: list n value
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while ((*head)->next != NULL)
		{
			*head = (*head)->next;
		}
		(*head)->next = new_node;
		*head = temp;
	}
	return (new_node);
}
