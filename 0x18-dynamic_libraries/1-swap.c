#include	"main.h"
/**
* swap_int - swaps the  values of the two integers provided as argument
* @a: First argument
* @b: Second argument
* Return: Null
*/

void	swap_int(int	*a,	int	*b)
{
	int temp	=	*a;
	*a	=	*b;
	*b	=	temp;
}
