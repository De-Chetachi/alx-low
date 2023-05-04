#include	"main.h"
/**
* _strncpy - copies n number of characters from
* the second string to the first string
* @dest: Pointer to the first string
* @src: Pointer to the second string
* @n: Number of characters to be added
* Return: Pointer to the resultin sting
*/

char	*_strncpy(char	*dest,	const	char	*src,	int	n)
{
	int	j;

	for	(j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j]	=	src[j];
	}
	while	(j < n)
	{
		dest[j]	=	'\0';
		j++;
	}

	return	(dest);
}
