#ifndef LIST_H
#define LIST_H
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: data block which is integer number
 * @prev: pointer  to the previous node in the list
 * @next: pointer to the next node in the list
 * Description: a doubly linked list to be used for the project
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* Functions prototypes */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* #ifndef LIST_H */
