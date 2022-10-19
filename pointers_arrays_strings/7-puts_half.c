#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string
 * Return: 0
 */

void puts_half(char *str)
{
	int cont = 0;
	int n;

	while (str[cont] != '\0')
	{
		cont++;
	}

	if (cont % 2 != 0)
	{
		n = (cont - 1) / 2;
	}
	else
	{
		n = cont / 2;
	}
	_putchar(str[n]);
	_putchar('\n');
}
