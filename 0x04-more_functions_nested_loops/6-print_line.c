#include	"main.h"
/**
* print_sign - priints a line
* @n: The integer to be considered
* Return: Null
*/

void	print_line(int	n)
{
	if	(n	<=	0)
	{
		_putchar('\n');
	}
	else
	{
		int	i;

		for	(i	=	0;	i	<	n;	i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
