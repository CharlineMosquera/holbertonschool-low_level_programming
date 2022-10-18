#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int c;

	for (c = _strlen(s); c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
