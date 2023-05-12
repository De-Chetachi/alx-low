#include	"main.h"
/**
* _strncat - concatenates n number of characters from
* the second string to the first string
* @dest: Pointer to the first string
* @src: Pointer to the second string
* @n: Number of characters to be added
* Return: Pointer to the resultin sting
*/

char	*_strncat(char	*dest,	const	char	*src,	int	n)
{
	int	i;
	int	j;

	for	(i = 0; dest[i] != '\0'; i++)
		;
	for	(j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i]	=	src[j];
		i++;
	}

	return	(dest);
}
