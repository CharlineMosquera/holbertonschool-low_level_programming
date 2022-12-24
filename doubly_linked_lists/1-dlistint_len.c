#include "lists.h"

/**
 * dlistint_len - function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t number_elements = 0;

	while (h)
	{
		h = h->next;
		number_elements++;
	}

	return (number_elements);
}
