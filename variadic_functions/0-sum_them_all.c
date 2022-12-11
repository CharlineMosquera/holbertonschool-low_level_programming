#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: Number of numbers to add
 * Return: sum result
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args; /*Declare variable that stores variable arguments*/
	unsigned int i = 0;
	int sum = 0;

	if (n != 0) /*Verify that it has parameters to perform the sum*/
	{
		va_start(args, n); /*initialize variable of type va_list*/

		while (i < n)
		{
			sum += va_arg(args, int);
			i++;
		}

		va_end(args);
		return (sum);
	}

	return (0);
}
