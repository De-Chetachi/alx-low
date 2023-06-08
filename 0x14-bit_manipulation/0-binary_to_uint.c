#include "main.h"
/**
* binary_to_uint - converts a binary number to a decimal number
* @b: Pointer to the binary number
* Return: The decimal number or 0
*/

unsigned	int	binary_to_uint(const char *b)
{
	unsigned	int	k, decint;

	decint = k = 0;

	/*return 0 if b is a null string*/
	if	(b == NULL)
		return (0);

	/*loop through the string*/
	while	(b[k] != '\0')
	{
		/*return 0 if any of the elements of the string is non-binary*/
		if (b[k] != '0' && b[k] != '1')
			return	(0);
		/*onvert to decimal*/
		decint	= 2 * decint + (b[k] - '0');
	}
	return	(decint);
}
