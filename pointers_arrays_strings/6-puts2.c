#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
