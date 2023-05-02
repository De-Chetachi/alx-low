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
	int	j;

	j	=	n	-	1;

	for	(i = 0; i <= j; i++)
	{
		printf("%d", a[i]);
		if(i != j)
			printf(", ");
	}

	printf("\n");
}
