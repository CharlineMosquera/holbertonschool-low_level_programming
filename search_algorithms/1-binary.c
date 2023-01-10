#include "search_algos.h"

/**
 * binary_search - function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located
 * or -1 if failed
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, medium, right, pr;

	left = 0;
	right = size - 1;

	if (!value || array == NULL)
		return (-1);

	while (left <= right)
	{
		medium = (left + right) / 2;
		pr = left;/*to print the array*/

		printf("Searching in array: ");
		print_array(array, size, pr);
		if (array[medium] == value)
		{
			return (medium);
		}
		else if (array[medium] > value)
		{
			right = medium - 1;
			size = right + 1;/*to print the array*/
		}
		else
		{
			left = medium + 1;
		}
	}
	return (-1);
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 * @pr: delimiter
 */
void print_array(const int *array, size_t size, size_t pr)
{
	while (array && pr < size)
	{
		printf("%d", array[pr]);
		if (array[pr] < array[size - 1])
			printf(", ");
		++pr;

	}
	printf("\n");
}
