#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
* main - prints the product of two number
* @argc: Number of arguments
* @argv: Pointer to an array
* Return: 0
*/

int	main(int argc, char *argv[])
{
	int	product;
	int	a,	b;

	a	=	*argv[1]	-	48;
	b	=	*argv[2]	-	48;
	if	(argc == 3)
	{
		product	=	a	*	b;
		printf("%d\n", product);
		return	(0);
	}
	else
	{
		printf("Error\n");
		return	(1);
	}
}
