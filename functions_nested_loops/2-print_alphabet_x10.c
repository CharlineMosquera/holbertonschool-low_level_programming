#include "main.h"
/**
 *print_alphabet_x10 - print text
 *Return: 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = '1'; c <= '9'; c++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar("%c");
		}
		_putchar('\n');
	}

	return (0);
}

