#include "lists.h"

void print_num(int num);

/**
 * print_listint - print all list_t elemnents
 * @h: listint_t pointer to the list head
 * Return: unsigned int of number of nodes
 */
size_t print_listint(const listint_t *h)
{

	size_t no_elem = 0;

	if (h == NULL)
		return (no_elem);

	while (h != NULL)
	{
		print_num(h->n);
		h = h->next;
		no_elem++;
		_putchar(10);
	}

	return (no_elem);
}

/**
 * print_num - print multi digits number using _putchar
 * @num: integer number to print
 * Return: void
 */
void print_num(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num / 10 == 0)
	{
		_putchar(num + '0');
		return;
	}
	print_num(num / 10);
	_putchar(num % 10 + '0');
}
