#include "main.h"

/**
* get_endianness - checks for big or small endian
* Return: 0 or 1
*/

int get_endianness(void)
{
	/*declare an intger variable init to 1*/
	unsigned int cheta = 1;
	/*initialize a pointer to the variable above*/
	char *onye = (char *) &cheta;
	/*typecast the char pointer to integer abd return*/
	return ((int)*onye);

}
