#include	<stdio.h>
#include	"main.h"
/**
* print_array  - prints the elements of an array
* @a: The pointer to an array
* @n: An integer
* Return: Null
*/

void	print_array(int	*a,	int	n)
{
	int	i;

	for	(i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		if(i != n)
			printf(", ");
	}

	printf("\n");
}
