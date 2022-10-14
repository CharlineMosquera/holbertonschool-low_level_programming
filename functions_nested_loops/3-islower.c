#include "main.h"
/**
 *_islower - function that checks for lowercase character
 *Return: 1 0
 *@c - lowercase character
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
