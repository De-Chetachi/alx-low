#include	<stdio.h>
#include	"main.h"
#include	<unistd.h>

/**
* print_sign(int n) - priints the alphabets in small letters
* @n: The integer to be considered
* Return: 0 If the argument is zero, 1 if the argument s positive, -1 if the argument is negative
*/

int	print_sign(int	n)
{
	if	(n	>	0)
	{
		putchar(43);
		result	=	1;
	}

	else
	{
		if	(n	<	0)
		{
			putchar('-');
			result	=	-1;
		}
		else
		{
			putchar('0');
			result	=	0;
		}
	}
	return	(result);
}
