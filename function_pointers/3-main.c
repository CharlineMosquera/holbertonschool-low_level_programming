#include "3-calc.h"

/**
 * main - function that prints the result of the entered operation
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, d;
	int (*ptr)(int, int);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit (99);
	}

	ptr = get_op_func(argv[2]);
        d = (ptr)(a, b);
	printf("%d\n", d);
	return (0);
}
