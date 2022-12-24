#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new
 * node at the end of a dlistint_t list.
 * @head: pointer to the head
 * @n: content of the new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_nodo, *aux;

	new_nodo = malloc(sizeof(dlistint_t));
	if (!new_nodo)
		return (NULL);

	new_nodo->n = n;
	new_nodo->next = NULL;

	if (*head == NULL)
	{
		new_nodo->prev = NULL;
		*head = new_nodo;
		return (new_nodo);
	}

	aux = *head;
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = new_nodo;
	new_nodo->prev = aux;

	return (new_nodo);
}
