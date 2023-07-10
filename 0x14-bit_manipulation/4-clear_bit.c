#include "main.h"

/**
* clear_bit - sets the bit at given index to 0
* @n: Pointer to the number whose bit is to be cleared
* @index: The index at which the bit ids to be cleared
* Return: 1 or -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int f_shift;

	/*return -1 if index is not within required range*/
	if (index > 63)
		return (-1);
	f_shift = 1;

	/**
	* left shift f_shift index times
	* this sets the value of f_shift at the required bit to 1, 0 others
	* take the compliment of this shift
	* this ensures that the value of the bit at index to 0, others to 1
	* perforn the and operation
	* this ensures that only the value of the bit at index is cleared
	* store the new result in *n
	* return 1
	*/
	*n = *n & (~(f_shift << index));
	return (1);
}
