#ifndef MAIN_H
#define MAIN_H

/*LIBRARIES*/
#include <stdio.h>
#include <fcntl.h> /*to use function open*/
#include <unistd.h> /*to use function read, close, write*/
#include <stdlib.h> /*to use function malloc*/
#include <string.h>

/*PROTOTYPES*/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strlen(const char *s);

#endif /*MAIN_H*/
