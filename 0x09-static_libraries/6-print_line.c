#include	"main.h"
/**
* print_line - priints a line
* @n: The integer to be considered
* Return: Null
*/

void	print_line(int	n)
{
	int	i;

	if	(n	<=	0)
	{
		_putchar('\n');
	}
	else
	{

		for	(i	=	0;	i	<	n;	i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
