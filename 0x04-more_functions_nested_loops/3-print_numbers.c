#include	"main.h"
#include	<stdio.h>
#include	"main.h"
#include	<unistd.h>

/**
* print_numbers - prints integers
* Return: Null
*/

void	print_numbers(void)
{
	int	i;

	for	(i	=	48;	i	<=	57;	i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
