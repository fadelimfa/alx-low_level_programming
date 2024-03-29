#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: pointer to pointer to head node of linked list
 *
 * Return: head node's data (n) or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
