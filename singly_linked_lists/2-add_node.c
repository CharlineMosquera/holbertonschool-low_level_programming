#include "lists.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: 0
 */

int _strlen(const char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: nodo
 * @str: str
 * Return: new nodo or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nodo;

	new_nodo = (list_t *)malloc(sizeof(list_t));
	if (new_nodo == NULL)
		return (NULL);
	{
	new_nodo->str = strdup(str);
	new_nodo->len = _strlen(str);
	new_nodo->next = *head;
	*head = new_nodo;
	}
	return (new_nodo);
}
