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
* main - prints the minimum number of coins to make
* change for an amount of money.
* @argc: Number of arguments
* @argv: Pointer to an array
* Return: 0
*/

int	main(int argc, char *argv[])
{
	int	coins,	cents;

	if	(argc != 2)
	{
		printf("Error\n");
		return	(1);
	}
	cents = _atoi(argv[1]);

	while	(cents > 0)
	{
		coins++;
		if	(cents - 25 >= 0)
		{
			cents	=	cents	-	25;
			continue;
		}
		if	(cents - 10 >= 0)
		{
			cents	=	cents	-	10;
			continue;
		}
		if	(cents - 5 >= 0)
		{
			cents	=	cents	-	5;
			continue;
		}
		if	(cents - 2 >= 0)
		{
			cents	=	cents	-	2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return	(0);
}
