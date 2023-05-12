#include "main.h"

/**
* reverse_array - reverses the content of an array
* @a: Pointer to the array
* @n: Number of elements in the array
* Return: Null
*/

void	reverse_array(int *a, int n)
{
	int	temp;
	int	i;

	for	(i = 0; i < n / 2; i++)
	{
		temp	=	a[i];
		a[i]	=	a[n - i - 1];
		a[n - i - 1]	=	temp;

	}

}
