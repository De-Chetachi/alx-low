#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: Number of cmdline args
* @argv: Array of cmdline args
* Return: An integer
*/

int	main(int argc, char *argv[])
{
	int	bytes,	i;
	int	(*address)(int, char **)	=	main;
	unsigned	char	opcd;

	if	(argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes	=	atoi(argv[1]);

	if	(bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for	(i = 0; i < bytes; i++)
	{
		opcd = *(unsigned char *)address;
		printf("%.2x", opcd);

		if	(i == bytes - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return	(0);
}
