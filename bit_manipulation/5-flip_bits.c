#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: 0
 */

int _strlen(const char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: number
 * @m: number
 * Return: number of bits to make the change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int logic_gate = 0, count_bits = 0;

	logic_gate = n ^ m;

	while (logic_gate)
	{
		if (logic_gate & 1)
			count_bits++;

		logic_gate >>= 1;
	}
	return (count_bits);
}
