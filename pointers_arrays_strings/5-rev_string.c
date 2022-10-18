#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 * Return: 0
 */

void rev_string(char *s)
{
	int c = 0, r = 0, cont = 0;

	for (r = 0; s[r] != '\0'; r++)
	{
		cont++;
	}

	for (c = (cont - 1); c >= 0; c--)
	{
		_putchar('\n');
	}
}
