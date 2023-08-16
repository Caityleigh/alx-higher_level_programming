#ifndef LISTS_H
#define LISTS_H

/* Heade Files */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/* Singly linked list */

/**
 * struct listint_s - singly linked list.
 *
 * @n: The integer.
 * @next: The points to the next node.
 *
 * Description: Singly linked list for project.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
size_t print_listint(const listint_t *h);
int is_palindrome(listint_t **head);
void reverse_listint(listint_t **head);


#endif
