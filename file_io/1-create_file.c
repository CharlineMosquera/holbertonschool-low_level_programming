#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: 0
 */
int _strlen(const char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

/**
 * create_file - function that creates a file
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int len = _strlen(text_content), fildes;

	if (filename == NULL)
		return (-1);

	fildes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fildes == -1)
		return (-1);
	write(fildes, text_content, len);
	close(fildes);

	return (1);
}
