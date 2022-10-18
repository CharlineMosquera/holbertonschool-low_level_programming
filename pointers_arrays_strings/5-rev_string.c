#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 * Return: 0
 */

void rev_string(char *s)
{
	int c = 0, cont = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		cont++;
	}

	for (revstr(cont))
	{
		_putchar(cont);
	}
}
