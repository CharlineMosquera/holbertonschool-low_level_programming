#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes
 * the node at index index of a dlistint_t linked list.
 * @head: pointer to pointer to the head
 * @index: the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (aux == NULL)
			return (-1);
		aux = aux->next;
	}

	if (aux == *head)
	{
		*head = aux->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		aux->prev->next = aux->next;
		if (aux->next != NULL)
			aux->next->prev = aux->prev;
	}

	free(aux);
	return (1);
}
