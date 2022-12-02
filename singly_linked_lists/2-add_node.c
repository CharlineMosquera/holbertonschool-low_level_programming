#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: nodo
 * @str: str
 * Return: new nodo or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nodo;
	char *aux;
	int len = 0;

	new_nodo = (list_t *)malloc(sizeof(list_t));
	if (new_nodo != NULL)
	{
		aux = strdup(str);

		if (aux == NULL)
		{
			free(new_nodo);
			return (NULL);
		}
		while (str[len])
		{
			len++;
		}
		new_nodo->str = aux;
		new_nodo->len = len;
		new_nodo->next = *head;
		*head = new_nodo;
		return (new_nodo);
	}
	return (NULL);
}
