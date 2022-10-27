#include "main.h"

/**
 * prime - calculate prime number
 * @n: number
 * @c: number
 * Return: 0 or 1
 */

int prime(int n, int c)
{
	if (n <= 1 || n % c == 0)
		return (0);
	if (n == c)
		return (1);
	if (n > c)
		prime(n, c + 1);
	return (1);
}

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: number
 * Return: prime
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
