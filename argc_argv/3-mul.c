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
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
