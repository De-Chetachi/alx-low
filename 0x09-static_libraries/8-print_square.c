#include	"main.h"
/**
* print_square - priints the alphabets in small letters
* @size: The integer to be considered
* Return: Null
*/

void	print_square(int	size)
{
	int	i;
	int	j;

	if	(size	<=	0)
	{
		_putchar('\n');
	}
	else
	{
		for	(i	=	0;	i	<	size;	i++)
		{
			for	(j	=	0;	j	<	size;	j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}