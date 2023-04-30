#ifndef LISTS_H
#define LISTS_H
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* function prototypes */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

/* Define add_node_end here */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *tmp_node;

    if (!head || !str)
        return (NULL);

    new_node = malloc(sizeof(list_t));
    if (!new_node)
        return (NULL);

    new_node->str = strdup(str);
    if (!new_node->str)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = strlen(str);
    new_node->next = NULL;

    if (!*head)
    {
        *head = new_node;
        return (new_node);
    }

    tmp_node = *head;
    while (tmp_node->next)
        tmp_node = tmp_node->next;

    tmp_node->next = new_node;

    return (new_node);
}

void free_list(list_t *head);

#endif /* LISTS_H */

