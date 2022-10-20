#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string
 * @s2: string
 * Return: int
 * 0 if s1=s2, negative if s1<s2, positive if s1>s2
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
	}
	return (0);
}
