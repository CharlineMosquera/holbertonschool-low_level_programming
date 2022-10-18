#include "main.h"

/**
 * reset_to_98(int *n) - function that takes a pointer
 * @n: pointer
 * Return: 0
 */

void reset_to_98(int *n)
{
	int p;

	p = 98;
	n = &p;

	_putchar(p);
}
