#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: string
 * @src: string
 * @n: size
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a += 1)
	{
	}
	for (b = 0; b < n && src[b] != '\0'; b += 1)
	{
		dest[b] = src[b];
	}
	for (; b < n; b += 1)
	{
		dest[b] = '\0';
	}
	return (dest);
}
