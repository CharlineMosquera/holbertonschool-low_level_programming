#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/*libraries*/
#include <stdio.h>

/*Prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(const int *array, size_t size, size_t pr);

#endif /*SEARCH_ALGOS_H*/
