#include "search_algos.h"

/**
 * linear_search - function that searches for a
 * value in an array of integers using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 * or -1 if failed
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL || !value)
		return (-1);
	while (index < size)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}
