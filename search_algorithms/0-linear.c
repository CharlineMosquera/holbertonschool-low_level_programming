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
	size_t index;

	if (array == NULL || !value)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (array[index] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	}
	return (index);
}
