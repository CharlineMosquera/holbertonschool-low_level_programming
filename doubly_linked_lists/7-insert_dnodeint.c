#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts a
 * new_nodenode at a given position
 * @h: pointer to pointer to the head
 * @idx: the index of the list where the new_node node should be added
 * @n: content of the new_node node
 * Return: the address of the new_node node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *aux = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		aux = aux->next;
		if (aux == NULL)
			return (NULL);
	}

	if (aux->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = aux;
	new_node->next = aux->next;
	aux->next->prev = new_node;
	aux->next = new_node;

	return (new_node);
}
