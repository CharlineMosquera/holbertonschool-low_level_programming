#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: string
 * @src: string
 * @n: size
 * Return: return a pointer to the destination string @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0'; b += 1)
	{
		dest[b] = src[b];
	}
	while (b < n)
	{
		dest[b] = '\0';
		b += 1;
	}
	return (dest);
}
