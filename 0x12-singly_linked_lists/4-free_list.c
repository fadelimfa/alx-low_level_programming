#include "lists.h"
#include <stdio.h>

#include <stdlib.h>
#include <string.h>
/**
 * free_list - frees a list_t linked list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *next = current->next;

		free(current->str);
		free(current);
		current = next;
	}
}
