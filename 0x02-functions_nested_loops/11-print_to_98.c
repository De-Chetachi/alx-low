#include	<stdio.h>
#include	<unistd.h>
#include	"main.h"

/**
* print_to_98 - priints the last digit
* @p: The integer to be considered
* Return: No
*/

void	print_to_98(int n);
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
