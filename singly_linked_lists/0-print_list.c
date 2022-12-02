#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count_nodos = 0;

	if (!h)
		return count_nodos;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count_nodos++;
		h = h->next;
	}
	return (count_nodos);
}
