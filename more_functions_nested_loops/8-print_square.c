#include "main.h"

/**
 * print_square - prints a square
 * size: square
 * Return: 0
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int a;
		int b;

		for (a = 0; a < size; a++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
