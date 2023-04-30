#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to the head of the list
 * @idx: index where the new node should be added (starting from 0)
 * @n: data to be stored in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *current = *head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (NULL);

	newnode->next = current->next;
	current->next = newnode;

	return (newnode);
}

