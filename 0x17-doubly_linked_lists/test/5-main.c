#include "../lists.h"
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *node;
    printf("=====================normal case==========================\n");
    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    node = get_dnodeint_at_index(head, 5);
    printf("node->n: %d\n", node->n);
    free_dlistint(head);
    head = NULL;
    printf("=====================one element list==========================\n");
    add_dnodeint_end(&head, 0);
    print_dlistint(head);
    node = get_dnodeint_at_index(head, 0);
    printf("node->n: %d\n", node->n);
    free_dlistint(head);
    head = NULL;
    printf("=====================the list is empty(NULL)==========================\n");
    print_dlistint(head);
    node = get_dnodeint_at_index(head, 0);
    if (node==NULL)
	    printf("node=NULL\n");
    free_dlistint(head);
    head = NULL;
    printf("=====================the node outrange==========================\n");
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    node = get_dnodeint_at_index(head, 15);
    if (node==NULL)
	    printf("node=NULL\n");
    free_dlistint(head);
    head = NULL;

    return (0);
}
