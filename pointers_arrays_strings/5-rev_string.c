#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 * Return: 0
 */

void rev_string(char *s)
{
	int c = 0, r = 0, cont = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		cont++;
	}
	_putchar(s[c]);

	for (r = (cont - 1); r >= 0; r--)
	{
		_putchar(s[r]);
	}
}
