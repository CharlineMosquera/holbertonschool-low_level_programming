#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer to node
 * @idx: the index of the list where the new node should be added
 * @n: number
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_nodo, *tmp;
	unsigned int i = 0;

	new_nodo = (listint_t *)malloc(sizeof(listint_t));
	if (new_nodo == NULL)
		return (NULL);
	new_nodo->n = n;

	tmp = *head;
	if (idx == 0)
	{
		new_nodo->next = tmp;
		*head = new_nodo;
		return (new_nodo);
	}

	while (i < (idx - 1))
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}

	new_nodo->next = tmp->next;
	tmp->next = new_nodo;
	return (new_nodo);
}
