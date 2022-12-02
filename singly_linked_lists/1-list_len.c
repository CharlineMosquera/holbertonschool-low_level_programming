#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked
 * @h: list_t
 * Return: number of elements in a linked
 */

size_t list_len(const list_t *h)
{
	size_t count_nodes = 0;

	while (h) 
	{
		count_nodes++;
		h = h->next;
	}

	return (count_nodes);
}
