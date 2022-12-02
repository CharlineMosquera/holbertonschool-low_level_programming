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
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer to nodo
 * @str: str
 * Return: new nodo or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nodo, *tmp;

	new_nodo = (list_t *)malloc(sizeof(list_t));
	if (new_nodo == NULL)
		return (NULL);
	new_nodo->str = strdup(str);
	new_nodo->len = _strlen(str);
	new_nodo->next = NULL;

	tmp = *head;
	if (*head == NULL)
	{
		*head = new_nodo;
		return (new_nodo);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_nodo;

	return (new_nodo);
}
