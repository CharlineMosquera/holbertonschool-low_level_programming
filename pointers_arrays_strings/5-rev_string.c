#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 * Return: 0
 */

void rev_string(char *s)
{
	int c = 0, r = 0, cont = 0;

	for (r = (cont - 1); r >= 0; r--)
	{
		cont++;
		_putchar(s[r]);
	}

	for (c = (cont -1); s[c] = r; c--)
	{
		_putchar(s[c]);
	}
}
