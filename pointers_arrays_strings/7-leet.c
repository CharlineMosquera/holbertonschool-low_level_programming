#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string
 * Return: @s
 */

char *leet(char *s)
{
	int i, x;

	char *l = "aAeEoOtTlL";
	char *r = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for  (x = 0; x < 10; x++)
		{
			if (s[i] == l[x])
			{
				s[i] = r[x];
			}
		}
	}
	return (s);
}
