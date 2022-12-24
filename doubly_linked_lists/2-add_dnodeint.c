#include "lists.h"

/**
 * add_dnodeint - function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: pointer to the head
 * @n: content of the new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nodo;

	new_nodo = malloc(sizeof(dlistint_t));
	if (new_nodo == NULL)
		return (NULL);

	new_nodo->n = n;
	new_nodo->prev = NULL;
	new_nodo->next = *head;
	if (*head != NULL)
		(*head)->prev = new_nodo;
	*head = new_nodo;

	return (new_nodo);
}
