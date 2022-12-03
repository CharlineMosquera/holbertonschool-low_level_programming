#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list.
 * @head: pointer to pointer to node
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *delete, *tmp;
    unsigned int i = 0;

    tmp = *head;
    if (tmp == NULL)
        return (-1);
    
    if (index == 0)
    {
        *head = (*head)->next;
        free(tmp);
        return(1);
    }

    while (i < (index - 1))
    {
        if (tmp->next == NULL)
            return (-1);
        tmp = tmp->next;
        i++;
    }

    delete = tmp->next;
    tmp->next = delete->next;
    free(delete);
    return(1);
}