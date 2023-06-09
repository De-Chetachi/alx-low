#include "main.h"

/**
* flip_bits - calculates the  number of bits that needs to be flipped for
* two numbers to be equivalent
* @m: A number
* @n: Another number
* Return: Number of bits that needs to be flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/**
	* declare two booleans to check the truth value of
	* bothe numbers at each iterate
	* declare an unsigned int varuable to store the result
	*/
	bool a, b;
	unsigned int	result;

	result = 0;
	while (n != 0 || m != 0)
	{
		a = false;
		b = false;
		if (n & 1)
			a = true;
		if (m & 1)
			b = true;
		/**
		* increment result by 1 if the values
		* of m and n are different at each iterate
		* that is if a is false and b is true increment result
		* vis vasa
		*/
		if (a != b)
			result++;

		n = n >> 1;
		m = m >> 1;
	}
	return (result);

}
