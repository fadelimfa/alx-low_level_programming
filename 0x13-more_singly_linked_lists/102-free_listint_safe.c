#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp, *current;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		if (current <= current->next)
		{
			*h = NULL;
			free(current);
			break;
		}
		else
		{
			tmp = current;
			current = current->next;
			free(tmp);
		}
		printf("-> [%p] %d\n", (void *) current, current->n);
	}
	*h = NULL;
	return (count);
}

