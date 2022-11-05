#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 * Return: len of a string or 0.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * @n: size
 * Return: pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	len1 = _strlen_recursion(s1);

	if (s2 == NULL)
		s2 = "";
	len2 = _strlen_recursion(s2);

	if (len2 >= n)
		len2 = n;
	ptr = malloc(sizeof(char) * (len1 + n + 1));

	if (ptr == NULL)
		return (NULL);

	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}

	while (j < len2)
	{
		ptr[i] = s2[j];
		i++, j++;
	}

	ptr[i] = '\0';
	return (ptr);
}
