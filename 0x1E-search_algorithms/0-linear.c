#include "search_algos.h"

/**
* linear_search - searches for a value in an array of integers
* using the Linear search algorithm
* @array: pointer to an array of integers
* @size: size of the array
* @value: the value to be found
* Return: value's index or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
