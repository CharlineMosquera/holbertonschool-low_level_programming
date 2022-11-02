#include "main.h"

/**
 * malloc_checked -  function that allocates memory using malloc
 * @b: size
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
