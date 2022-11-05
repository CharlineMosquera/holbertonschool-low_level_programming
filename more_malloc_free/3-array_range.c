#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: value
 * @max: value
 * Return: pointer or NULL
 */

int *array_range(int min, int max)
{
	int *ptr = NULL, size, i;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min, min++;

	return (ptr);
}
