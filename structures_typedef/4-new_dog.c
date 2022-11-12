#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *lenname;
	char *lenowner;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL || name == NULL || age < 0 || owner == NULL)
		return (NULL);
	else
	{
	lenname = malloc(sizeof(_strlen(name) + 1));
	lenowner = malloc(sizeof(_strlen(name) + 1);

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	else
	{
		newdog->name = _strcpy(lenname, name);
		newdog->age = age;
		newdog->owner = _strcpy(lenowner, owner);
	}
	return (newdog);
	}
}

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: 0
 */
int _strlen(char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: pointer
 * @src: ponter
 * Return: @dest
 */
char *_strcpy(char *dest, char *src)
{
	char *c = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (c);
}
