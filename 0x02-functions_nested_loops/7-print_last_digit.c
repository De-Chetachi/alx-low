#include	<stdio.h>
#include	"main.h"

/**
* print_last_digit - priints the alphabets in small letters
* @p: The integer to be considered
* Return: The last digit
*/

int	print_last_digit(int	p)
{
	int	result;
	int	q;

	q	=	p	%	10;
	result	=	q;
	
	return	(result);
}
