#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list, even with a loop
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *turtle, *hare;

    if (!head)
        exit(98);

    turtle = head;
    hare = head;

    while (turtle && hare && hare->next)
    {
        turtle = turtle->next;
        hare = hare->next->next;

        if (turtle == hare)
        {
            printf("[%p] %d\n", (void *)turtle, turtle->n);
            turtle = head;

            while (turtle != hare)
            {
                printf("[%p] %d\n", (void *)turtle, turtle->n);
                turtle = turtle->next;
                hare = hare->next;
            }

            printf("-> [%p] %d\n", (void *)turtle, turtle->n);

            return (0);
        }

        printf("[%p] %d\n", (void *)turtle, turtle->n);
    }

    return (0);
}

