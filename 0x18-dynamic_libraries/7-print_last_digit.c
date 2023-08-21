#include	<stdio.h>
#include	<unistd.h>
#include	"main.h"

/**
* print_last_digit - priints the last digit
* @p: The integer to be considered
* Return: The last digit
*/

int	print_last_digit(int	p)
{
	int	q;

	q	=	p	%	10;

	if	(q	<	0)
	{
		_putchar(-q	+	48);
		return	(-q);
	}
	else
	{
		_putchar(q	+	48);
		return	(q);
	}
}
