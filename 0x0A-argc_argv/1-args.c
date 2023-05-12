#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
* main - prints the number of arguments passed into it
* @argc: Number of arguments
* @argv: Pointer to an array
* Return: 0
*/

int	main(int argc, char *argv[])
{
	int	i;
	int	sum;
	(void)argv;

	sum	=	0;
	for	(i = 1; i < argc; i++)
	{
		sum	=	sum	+	1;
	}
	printf("%d\n", sum);
	return	(0);
}
