#ifndef LISTS_H
#define LISTS_H

/* Header Files */

#include <stdlib.h>



/* Singly Linked List */

/**
 * struct listint_s - Our Singly Linked list.
 *
 * @n: The integer.
 * @next: The amount of points to the next node.
 *
 * Desc: A sinlgy linked list node structure for our ALX '0x00 - Python -
 * Hello, World' Project.
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;




/* Function Prototypes */

void free_listint(listint_t *head);
listint_t *add_nodeint(listint_t **head, const int n);
size_t print_listint(const listint_t *h);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
