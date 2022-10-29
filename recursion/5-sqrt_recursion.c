#include "main.h"

/**
 * _root - returns the root of a number
 * @n: number
 * @r: root
 * Return: natural square root
 */

int _root(int n, int r)
{
	if (r * r > n)
		return (-1);

	if (r * r == n)
		return (r);

	return (_root(n, r + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: call funtion _root
 */

int _sqrt_recursion(int n)
{
	return (_root(n, 1));
}
