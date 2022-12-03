#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked listint_t list.
 * @h: list
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h)
	{
		count_nodes++;
		h = h->next;
	}

	return (count_nodes);
}