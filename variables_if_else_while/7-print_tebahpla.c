#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the text
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	{
		putchar('\n');
	}

	return (0);
}
