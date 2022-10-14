#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: number
 * Return: Always 0.
 */

int print_last_digit(int i)
{
	int result = i % 10;

	if (result < 0)
		result *= -1;

	_putchar(result + '0');
	return (result);
}
