#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to nodo
 * @n: number
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodo, *tmp;

	new_nodo = (listint_t *)malloc(sizeof(listint_t));
	if (new_nodo == NULL)
		return (NULL);
	new_nodo->n = n;
	new_nodo->next = NULL;

	tmp = *head;
	if (*head == NULL)
	{
		*head = new_nodo;
		return (new_nodo);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_nodo;

	return (new_nodo);
}
