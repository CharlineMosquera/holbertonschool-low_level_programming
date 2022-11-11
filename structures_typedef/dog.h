#ifndef DOG_H
#define DOG_H

/**
 * struct dog - tag name
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Description: dog data record
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

/*libraries*/
#include <stdio.h>
#include <stdlib.h>

/*Prototype*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
