#include "lists.h"

/**
 * check_cycle - A function that checks to see if a list is in an endless
 * loop/cycle.
 *
 * @list: The list to be checked.
 *
 * Return: 0 if no cycle is found, otherwise 1.
 */

int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
	{
		return (0);
	}

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			return (1);
		}
	}

	return (0);
}
