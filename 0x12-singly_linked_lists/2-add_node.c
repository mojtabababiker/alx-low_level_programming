#include "lists.h"

/**
 * add_node - add a new node to the beginning of the list_t list
 * @head: pointer to the list_t list
 * @str: pointer to list_t->str string
 * Return: pointer to the added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	if (head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	*head = new;
	return (new);
}
