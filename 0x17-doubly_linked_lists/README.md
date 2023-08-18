# 0x17-doubly_linked_lists

  `Linked list` is one of the most efficient and wide used `data structure` among all the HL programming languegs, the basic structure of `linked list` is a block in memory consists of a subblock for `data` and another as a pointer to the next [prevoius] or [both] node depending on the type of the `linked list`, and each block caclled `node`.

-`Linked list` have three types:-

  . `Singly linked list`: in this type the `node` consists of a block for `Data` and a block as pointer to the next `node` in the list, the last `node` in this type will always point to `NULL`.

  . `Doubly linked list`: in this type each `node` consists of three blocks, one for the `Data` and the other two are pointer blocks, one for the `next node` and the other for `previous node`, in the `Doubly linked list` the first node will have `NULL` as the `previous node` pointer, and the last node will have 'NULL' as the 'next node` pointer. This type will be our supject for the below projects.

  . `Circular linked list`: from its name it can be consider as a circle of `data` and `node pointers`, the diffrences between it and the `Doubly linked list` in `Circular linked list` the `first node` will have the `previous node` pointer set to the `last node`, and the `last node` will have `next node` pointer set to the `first node`.

# Project Tasks

## 0-print_dlistint.c

   Function that prints all the elements of a `dlistint_t` list.
   . Prototype: `size_t print_dlistint(const dlistint_t *h);`
   . Return: the number of nodes

## 1-dlistint_len.c

   Function that returns the number of elements in a `linked dlistint_t` list.
   . Prototype: `size_t dlistint_len(const dlistint_t *h);`

## 2-add_dnodeint.c

   Function that adds a new node at the beginning of a `dlistint_t` list.
   . Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
   . Return: the address of the new element, or `NULL` if it failed

## 3-add_dnodeint_end.c

   Function that adds a new node at the end of a `dlistint_t` list.
   . Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
   . Return: the address of the new element, or `NULL` if it failed

## 4-free_dlistint.c

   Function that frees a `dlistint_t` list.
   . Prototype: `void free_dlistint(dlistint_t *head);`

## 5-get_dnodeint.c

   Function that returns the nth node of a `dlistint_t` linked list.
   . Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
   . where `index` is the index of the node, starting from 0
   . if the node does not exist, return `NULL`

## 6-sum_dlistint.c

   Function that returns the sum of all the data (n) of a `dlistint_t` linked list.
   . Prototype: `int sum_dlistint(dlistint_t *head);`
   . if the list is empty, return 0

## 7-insert_dnodeint.c

   Function that inserts a new node at a given position.
   . Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
   . where `idx` is the index of the list where the new node should be added. Index starts at 0
   . Returns: the address of the new node, or` NULL` if it failed
   . if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

## 8-delete_dnodeint.c

   Function that deletes the node at index index of a `dlistint_t` linked list.
   . Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
   . where `index` is the index of the node that should be deleted. Index starts at 0
   . Returns: `1` if it succeeded, `-1` if it failed
