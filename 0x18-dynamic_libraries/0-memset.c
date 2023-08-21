#include "main.h"

/**
* _memset - fills memory with constant byte
* @s: Pointer to memory area
* @b: Constant byte
* @n: Number of bytes in memory to be filled
* Return: Pointer to memory area s
*/

char	*_memset(char *s, char b, unsigned int n)
{
	unsigned	int	i;

	i	=	0;

	while	(i < n)
	{
		s[i]	=	b;
		i++;
	}
	return	(s);
}
