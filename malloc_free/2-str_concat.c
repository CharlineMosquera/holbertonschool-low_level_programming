#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * Return: pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *dest = NULL;
	int len1 = 0, len2 = 0, i = 0;

	if (s1 == NULL)
		return ('\0');

	if (s2 == NULL)
		return ('\0');

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	dest = malloc(sizeof(char) * (len1 + len2 + 1));

	if (dest == NULL)
		return (NULL);

	while (i < len1)
	{
		dest[i] = s1[i];
		i++;
	}

	while (i < len1 + len2)
	{
		dest[i] = s2[i - len1];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
