#include "lists.h"

/**
 * free_list - function that adds a new node at the end of a list_t list.
 * @head: nodo
 */

void free_list(list_t *head)
{
    while (head->next != NULL)
    {
        free(head);
    }
    
}
