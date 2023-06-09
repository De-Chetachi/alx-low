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
	unsigned int iterate, result;

	result = 0;
	for (iterate = 0; iterate < 32; iterate++)
	{
		a = false;
		b = false;
		if (n & (1 << iterate))
			a = true;
		if (m & (1 << iterate))
			b = true;
		/**
		* increment result by 1 if the values
		* of m and n are different at each iterate
		* that is if a is false and b is true increment result
		* vis vasa
		*/
		if (a == false)
		{
			if (b == true)
				result++;
		}
		else
		{
			if (b == false)
				result++;
		}
	}
	return (result);

}
