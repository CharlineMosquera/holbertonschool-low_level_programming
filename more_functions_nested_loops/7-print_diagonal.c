#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number
 * Return:  0
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)

			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\\');
	}
	else
	{
		_putchar('\n');
	}
}
