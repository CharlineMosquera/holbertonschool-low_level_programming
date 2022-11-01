#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory
 * @str: string
 * Return: pointer or NULL if failed
 */

char *_strdup(char *str)
{
	char *dup = NULL;
	int cont = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[cont] != '\0')
		cont++;

	dup = malloc(sizeof(char) * cont + 1);

	if (dup == NULL)
		return (NULL);

	for (; len <= cont; len++)
		dup[len] = str[len];

	return (dup);

	free(dup);
	return (0);
}
