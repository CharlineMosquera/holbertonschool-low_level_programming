#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t number_nodos = 0;

	if (!h)
		return (number_nodos);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		number_nodos++;
	}
	return (number_nodos);
}
