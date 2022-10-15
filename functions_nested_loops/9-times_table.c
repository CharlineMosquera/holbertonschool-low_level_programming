#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: 0
 */

void times_table(void)
{
	int a, b, c;

	c = 0;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int result;

			result = c * b;

			if (result > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (b == 0)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
		}
		c++;
		_putchar('\n');
	}
}
