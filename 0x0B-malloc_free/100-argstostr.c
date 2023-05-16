#include "main.h"
#include <stdlib.h>
#include <stddef.h>


/**
* argstostr -  concatenates all the arguments of your program
* @ac: Number of arguments or height
* @av: Pointer to a two dimensional array
* Return: Returns a pointer to a new string, or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	int	i,	j,	k,	l,	m;
	int	sum;
	char	*ptr;

	if	(ac == 0 || av == NULL)
		return	(NULL);

	j	=	0;
	sum	=	0;

	for	(i = 0; i < ac; i++)
	{
		while	(av[j])
			j++;
		sum	+=	j;
	}
	ptr	=	(char *)	malloc((sum * sizeof(char)) + 1);

	if	(av == NULL || ac == 0)
		return	(NULL);
	k	=	0;
	l	=	0;
	m	=	0;
	while	(av[k])
	{
		while	(av[k][l])
		{
			ptr[m]	=	av[k][l];
			l++;
			m++;
		}
		ptr[m]	=	'\n';
		l	=	0;
		k++;
		m++;
	}
	ptr[m]	=	'\0';
	return	(ptr);
}
