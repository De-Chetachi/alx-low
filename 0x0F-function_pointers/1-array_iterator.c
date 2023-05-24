#include "function_pointers.h"

/**
* array_iterator - prints a name
* @array: Pointer to an array
* @size: Size of the array
* @action: Pointer to a function
* Return: Void
*/
void	array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned	int	i;

	if	((array != NULL) && (action != NULL) && (size != 0))
		for	(i = 0; i < size; i++)
			(*action)(array[i]);
}
