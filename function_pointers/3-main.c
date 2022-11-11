#include "3-calc.h"

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
