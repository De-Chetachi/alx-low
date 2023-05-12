#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of elements on the diagonals
* @a: Pointer to an array
* @size: Size of the array
* Return: Void
*/

void print_diagsums(int *a, int size)
{
	int	i,	j;
	int	sum1,	sum2;

	sum1	=	0;
	sum2	=	0;

	for	(i = 0; i <= (size * size); i = i + size + 1)
	{
		sum1	=	sum1	+	a[i];
	}
	for	(j = (size - 1); j <= (size * size - size); j = (j + size - 1))
	{
		sum2	=	sum2	+	a[j];
	}
	printf("%d, %d\n", sum1, sum2);
}
