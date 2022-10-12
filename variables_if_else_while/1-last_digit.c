
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (%d., n > 5)
	{
		printf("Last digit of %i is %d. and is greater than 5");
        }
	else if (%d., n == 0)
	{
		printf("Last digit of %i is %d. and is 0");
	}
	else
	{
		printf("Last digit of %i is %d. and is less than 6 and not 0");
	}
	
	return (0);
}
