#include "3-calc.h"

/**
* main - entry point
* @argc: Nomber og command line args
* @argv: Pointr to an array of cmdline args
* Return: An integer
*/

int	main(int argc, char *argv[])
{
	int	a, b, result;
	int	(*prt)(int, int);

	a	=	atoi(argv[1]);
	b	=	atoi(argv[3]);
	if	(argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	prt	=	get_op_func(argv[2]);
	if	(!prt)
	{
		printf("Error\n");
		exit(99);
	}
	result  =       (*get_op_func(argv[2]))(a, b);
	printf("%d\n", result);

	return	(0);
}
