#include <stdio.h>
#include "lists.h"


/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the pointer of the head of the list
 * @n: integer value to store in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* initialize the new node */
	new_node->n = n;
	new_node->next = *head;

	/* update the head of the list to point to the new node */
	*head = new_node;

	/* return the address of the new node */
	return (new_node);
}

