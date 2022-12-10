#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: filename for opened or read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t letters_out = 0;
	char *buff; /*memory location where the read data will be stored*/
	int fildes; /*file descriptor*/

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fildes = open(filename, O_RDONLY);
	letters_out = read(fildes, buff, letters);
	if (fildes == -1 || letters_out == -1) /*the file could not be opened or read*/
		return (0);

	close(fildes);
	return (letters_out);
}
