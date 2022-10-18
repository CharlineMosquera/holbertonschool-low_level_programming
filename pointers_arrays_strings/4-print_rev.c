#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int c, r;

	for (c = 0; s[c] != '\0'; c++)
	{
		r = rev s[c];
		_putchar(r);
	}
	_putchar('\n');
}
