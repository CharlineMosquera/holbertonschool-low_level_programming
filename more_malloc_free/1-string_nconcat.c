#include "main.h"

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
	unsigned int len1, len2, i = 0;

	if (s1 == NULL)
		s1 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	if (s2 == NULL)
		s2 = "";
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n >= len2)
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	ptr = malloc(sizeof(char) * (len1 + n + 1));

	if (ptr == NULL)
		return (NULL);

	for (; i < len1; i++)
		ptr[i] = s1[i];

	for (; i < len1 + len2; i++)
		ptr[i] = s2[i - len1];

	ptr[i] = '\0';
	return (ptr);
}
