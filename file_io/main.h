#ifndef MAIN_H
#define MAIN_H

/*LIBRARIES*/
#include <fcntl.h> /*to use function open*/
#include <unistd.h> /*to use function read, close*/
#include <stdlib.h> /*to use function malloc*/

/*PROTOTYPES*/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /*MAIN_H*/
