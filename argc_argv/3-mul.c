#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, mul = 0;

	for (i = 1; i < argc; i++)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}

	return (0);
}
