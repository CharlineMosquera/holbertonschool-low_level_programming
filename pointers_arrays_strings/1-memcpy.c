#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer
 * @src: pointer
 * @n: bytes from memory area
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
