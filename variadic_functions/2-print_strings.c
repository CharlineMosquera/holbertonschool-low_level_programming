#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (i < n)
		{
			printf("%s", va_arg(args, char *));

			/*It is used so that a separator is not printed at the end*/
			if (i != n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
