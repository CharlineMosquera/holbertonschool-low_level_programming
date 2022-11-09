#include "3-calc.h"

int main(int argc, char *argv[])
{
	int a, b, d;
	int (*c)(int, int);
	char *op;

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	if (*op != '+' && *op != '-' && *op != '/' && *op != '*' && *op != '%')
	{
		printf("Error\n");
		exit (99);
	}

	if ((*op == '/' && b == 0) || (*op == '%' && b == 0))
	{
		printf("Error\n");
		exit (100);
	}

	c = get_op_func(op);
        d = (*c)(a, b);
	printf("%d\n", d);
	return (0);
}
