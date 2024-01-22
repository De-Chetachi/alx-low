#include "search_algos.h"

/**
* binary_search - searches for a value in an array of integers
* using the binary search algorithm
* @array: pointer to an array of integers
* @size: size of the array
* @value: the value to be found
* Return: value's index or -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t chunk = 0;

	if (!array)
		return (-1);
	while (size > 1)
	{
		print_array(array, size);
		mid = size / 2;
		if (!(size % 2))
			mid -= 1;
		if (array[mid] == value)
			return (mid + chunk);
		if (array[mid] < value)
		{
			chunk = chunk + mid + 1;
			array = array + mid + 1;
			size = size - mid - 1;
			continue;
		}
		if (array[mid] > value)
		{
			size = mid;
			continue;
		}
	}
	/*handle an array with single element*/
	print_array(array, size);
	if (array[0] == value)
		return (chunk);
	return (-1);
}

/**
* print_array - prints a search array
* @array: pointer to first element of array
* @size: size of array
* Return: 0
*/

int print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i == (size - 1))
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
	return (0);
}
