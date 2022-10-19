#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: pointer
 * @src: ponter
 * Return: @dest
 */

char *_strcpy(char *dest, char *src)
{
	char *c = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (c);
}
