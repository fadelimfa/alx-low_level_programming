#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * sum_listint - retu) of a listint_t linked list.
 * @head: pointer to the first element of the list.
 *
 * Return: the sum of all the data (n) of the list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}

