#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: struct dog
 */

void print_dog(struct dog *d)
{
	char *on = d->owner;

	if (d == NULL)
		;
	(d->name == NULL) ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	(d->age == 0) ? printf("Age: 0.00\n") : printf("Age: %f\n", d->age);
	(on == NULL) ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
}
