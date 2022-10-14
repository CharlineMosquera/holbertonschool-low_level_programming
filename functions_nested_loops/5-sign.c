#include "main.h"
/**
 *print_sign - prints the sign of a number
 *@n: the sign of a number
 *Return: 1 0 -1
 */

int print_sign(int n)
{
	if (n >= '0')
		return (1);
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar('1');
		_putchar('\n');
	}
	if (n == '0')
		return (0);
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar('0');
		_putchar('\n');

	}
	else
		return (-1);
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar('/');
		_putchar('\n');
	}
}
