#include "main.h"

/**
* leet - encodes a string into 1337
* @s: The pointer to the string
* Return: Pointer to the modified string
*/

char	*leet(char *s)
{
	char	str1[10]	=	"aAeEoOtTlL";
	char	str2[10]	=	"4433007711";
	int	i;
	int	j;

	for	(i = 0; s[i] != '\0'; i++)
	{
		for	(j = 0; j < 10; j++)
		{
			if	(s[i] == str1[j])
			{
				s[i] = str2[j];
			}
		}
	}
	return	(s);

}

