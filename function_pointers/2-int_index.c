#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: the number of elements in the array
 * @cmp: pointer to the function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (index < size)
	{
		index++;
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
