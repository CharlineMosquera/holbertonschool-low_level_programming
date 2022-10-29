#include "main.h"

/**
 * root - returns the root of a number
 * @n: number
 * @r: root
 * Return: -1 or r
 */

int root(int n, int r)
{
	if (r * r > n)
	{
		return (-1);
		if (n < r * r)
		{
			return (-1);
		}
	       return (r);
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: -1 or root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (root(n, 0));
}
