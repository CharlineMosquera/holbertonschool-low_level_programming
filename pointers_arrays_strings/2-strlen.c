#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: 0
 */

int _strlen(char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}
