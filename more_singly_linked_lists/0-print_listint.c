#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count_nodos = 0;

	if (!h)
		return (count_nodos);
	while (h)
	{
		printf("%d\n", h->n);
		count_nodos++;
		h = h->next;
	}
	return (count_nodos);
}