#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <math.h>

/*prototypes*/
int linear_search(int *array, size_t size, int value);
int print_array(int *array, size_t size);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
#endif
