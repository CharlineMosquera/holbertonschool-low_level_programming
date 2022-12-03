#include "lists.h"

/**
 * free_list - function that adds a new node at the end of a list_t list.
 * @head: nodo
 */

void free_list(list_t *head)
{
    list_t *tmp;

    while (head)
    {
        tmp = head->next;
        free(head->str);
        free(head);
        head = tmp;
    }
}
