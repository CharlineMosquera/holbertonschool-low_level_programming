#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: pointer to node
 * Return: 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int elements;

	if (*head == NULL)
		return (0);
	{
		tmp = *head;
		elements = (*head)->n;
		*head = (*head)->next;
		free(tmp);
	}
	return (elements);
}
