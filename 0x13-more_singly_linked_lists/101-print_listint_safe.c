#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list, even with a loop
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
/**
 * print_listint_safe - prints a listint_t linked list, even if it has a loop
 * @head: a pointer to the head node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare, *loop_start;
	size_t count = 0;

	if (!head)
		exit(98);

	tortoise = head;
	hare = head;

	while (hare && hare->next)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;
		if (hare == tortoise)
			break;
	}

	if (!hare || !hare->next)
	{
		/* no loop */
		for (count = 0; head; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		/* there is a loop */
		loop_start = head;
		while (loop_start != tortoise)
		{
			loop_start = loop_start->next;
			tortoise = tortoise->next;
		}

		while (head != tortoise)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}

		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;

		tortoise = tortoise->next;
		while (tortoise != loop_start)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			tortoise = tortoise->next;
			count++;
		}

		printf("-> [%p] %d\n", (void *)loop_start, loop_start->n);
		count++;
	}

	return (count);
}

