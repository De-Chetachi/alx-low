#include "main.h"
#include <unistd.h>
#include <stdio.h>

#include "main.h"
/**
* _atoi - converts a string to an integer
* @s: The pointer to the string to be converted
* Return: An integer
*/

int	_atoi(char *s)
{
	int	i,	uni,	sign;
	unsigned int	num;

	i	=	0;
	uni	=	0;
	sign	=	1;
	num	=	0;

	while	(s[i])
	{
		if	(s[i] == 45)
		{
			sign	=	sign	*	-1;
		}
		while	(s[i] >= 48 && s[i] <= 57)
		{
			uni	=	1;
			num	=	(num * 10)	+	(s[i] - 48);
			i++;
		}
		if	(uni == 1)
		{
			break;
		}
		i++;
	}
	num	=	num	*	sign;
	return	(num);
}

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

	if	(argc == 3)
	{
		a	=	_atoi(argv[1]);
		b	=	_atoi(argv[2]);
		product	=	a	*	b;
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return	(1);
	}
	return	(0);
}
