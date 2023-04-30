#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to a pointer to the first node of the list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *tmp;

	if (!h || !*h)
		return (0);

	current = *h;
	while (current)
	{
		size++;
		if (current < current->next)
		{
			tmp = current;
			current = current->next;
			free(tmp);
		}
		else
		{
			free(current);
			*h = NULL;
			break;
		}
	}

	return (size);
}

