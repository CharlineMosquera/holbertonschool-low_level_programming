#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string
 * Return: 0
 */

void _puts(char *str)
{
	int cont = 0;

	while (str[cont] != '\0')
	{
		_putchar(str[cont]);
		cont++;
	}
	_putchar('\n');
}
