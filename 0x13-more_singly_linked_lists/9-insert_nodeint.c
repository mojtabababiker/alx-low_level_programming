#include "lists.h"

/**
 * insert_nodint_at_inded - as the name say, insert node at a given position
 * @head: pointer to first node in the list
 * @idx: position to add the node on it
 * @n: the n value of the new node
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp, *prev_node;

	unsigned int i = 0;

	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	for (i = 0 ; i < idx ; i++)
	{
		if (*head == NULL)
			return (NULL);
		prev_node = *head;
		*head = (*head)->next;
	}
	new->n = n;
	new->next = (*head);
	prev_node->next = new;
	*head = temp;
	return (new);
}
