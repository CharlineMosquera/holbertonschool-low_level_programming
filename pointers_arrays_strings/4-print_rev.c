#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int c, r, cont = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		cont++;
	}

	for (r = (cont - 1); r >= 0; r--)
	{
		_putchar(s[r]);
	}

	_putchar('\n');
}
