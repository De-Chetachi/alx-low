#include "search_algos.h"

/**
* jump_search - searches for a value in an array of integers
* using the jump search algorithm
* @array: pointer to an array of integers
* @size: size of the array
* @value: the value to be found
* Return: value's index or -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t onset = 0, i;
	size_t offset = 0;
	size_t step = sqrt(size);

	if (!array)
		return (-1);

	while (array[offset] < value && (offset < size))
	{
		printf("Value checked array[%ld] = [%d]\n", offset, array[offset]);
		onset =  offset;
		offset = offset + step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", onset, offset);

	/*handle offset that is >ter than the index of the last array element*/
	if (offset > (size - 1))
		offset = (size - 1);
	for (i = onset; i <= offset; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
