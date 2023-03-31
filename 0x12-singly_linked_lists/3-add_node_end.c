#include "lists.h"

/**
 * add_node_end - add a new node to the end of the list_t list
 * @head: poiter to the addres of the list_t head
 * @str: pointer to the new node string
 * Return: the address of the new node or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	new  = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(temp->str);
		free(temp);
		return (NULL);
	}
	if (str == NULL)
	{	/*test the str pointer*/
		free(new->str);
		free(temp->str);
		free(new);
		free(temp);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	if (*head == NULL)
	{	/*first element in the list_t list*/
		new->next = NULL;
		*head = new;
		free(temp);
		return (new);
	}
	temp->next = *head;
	while ((*head)->next != NULL)
	{	/*search for the last element in list_t list*/
		(*head) = (*head)->next;
	}
	(*head)->next = new;
	*head = temp->next;
	new->next = NULL;
	free(temp);
	return (new);
}
