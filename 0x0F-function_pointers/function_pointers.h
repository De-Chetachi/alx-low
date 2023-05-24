#ifndef	FUNCTION_POINTERS_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#define FUNCTION_POINTERS_H

void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));

#endif