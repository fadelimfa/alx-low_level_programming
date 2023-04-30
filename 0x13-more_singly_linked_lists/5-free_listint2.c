#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list
 * @head: Pointer to pointer to the first element of the list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
