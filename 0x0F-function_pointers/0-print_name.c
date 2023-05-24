#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
* void print_name - prints a name
* @name: Pointer to a string
* @f: Pointer to a function
* Return: Void
*/
void	print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
