#include	"main.h"

/**
* print_diagonal - prints a diagonal line
* @n: An integer
* Return: Null
*/

void	print_diagonal(int	n)
{
	if	(n	<=	0)
	{
		_putchar('\n');
	}
	else
	{
		int	i;
		int	j;

		for	(i	=	0;	i	<	n;	i++)
		{
			for	(j	=	0;	j	<	i;	j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
