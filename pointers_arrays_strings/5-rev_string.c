#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 * Return: 0
 */

void rev_string(char *s)
{
	int cont = 0;
	int i, x;

	while (s[cont] != '\0')
	{
		cont++;
	}

	for (x = 0; x < cont / 2; x++)
	{
		i = s[x];
		s[x] = s[cont - 1 - x];
		s[cont - 1 - x] = i;
	}
}
