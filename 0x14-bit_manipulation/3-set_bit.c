#include "main.h"

/**
* set_bit - sets the value of the bit at a given index to 1
* @n: Pointer to the number whose bit is to be set
* @index: The index
* Return: 1 or 0
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int f_shift;

	/*return -1 if the index is nit within the required range*/
	if (index > 63)
		return (-1);

	f_shift = 1;
	/*left shift f_shift to the required index*/
	/*perfor the or operator this would set the bit to 1*/
	*n  = *n | (f_shift << index);
	return (1);
}
