#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: pointer to a string
* @accept: A pointer to a substring
* Return: The number of bytes in the initial segment of s
*/

unsigned	int	_strspn(char *s, char *accept)
{
	unsigned	int	i;
	unsigned	int	j;
	unsigned	int	n;
	unsigned	int	m;

	n	=	0;

	for	(i = 0; s[i] != '\0'; i++)
	{
		m	=	0;

		for	(j = 0; accept[j] != '\0'; j++)
		{
			if	(accept[j] == s[i])
			{
				n++;
				m	=	1;
			}
		}
		if	(m == 0)
		{
			return	(n);
		}
	}
	return	(n);
}

