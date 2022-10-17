#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int f, c;

		for (f = 1; f <= size; f++)
		{
			for (c = f; c < size; c++)
			{
				_putchar(' ');
			}
			for (c = 1; c <= f; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
