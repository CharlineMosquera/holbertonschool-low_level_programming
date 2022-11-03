#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: array
 * @size: size
 * Return: pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
	free(ptr);
	return (0);
}
