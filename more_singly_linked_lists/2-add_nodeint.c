#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 * at the beginning of a listint_t list.
 * @head: pointer to frist nodo
 * @n: number
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodo;

	new_nodo = (listint_t *)malloc(sizeof(listint_t));
	if (new_nodo == NULL)
		return (NULL);
	{
	new_nodo->n = n;
	new_nodo->next = *head;
	*head = new_nodo;
	}
	return (new_nodo);
}
