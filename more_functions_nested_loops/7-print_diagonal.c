#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number
 * Return:  0
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;
		int b;

		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (a == b)
					_putchar('\\');
				else if (b < a)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
