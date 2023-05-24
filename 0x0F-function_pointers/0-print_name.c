#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
* print_name - prints a name
* @name: Pointer to a string
* @f: Pointer to a function
* Return: Void
*/
void	print_name(char *name, void (*f)(char *))
{
	if	(name != NULL && f != NULL)
		(*f)(name);
}
