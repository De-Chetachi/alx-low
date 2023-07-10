#include "main.h"

/**
* get_bit - finds the value of a bit at a given index
* @n: The given number
* @index: The index
* Return: The value of the bit or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, f_shift;

	/*return -1 if the given index is not within the valid range*/
	if (index > 63)
		return (-1);

	f_shift = 1;
	i = f_shift & (n >> index);
	return (i);
}
