#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: The pointer to the string to be converted
* Return: An integer
*/

int	_atoi(const char *s)
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
* powa - calcutates a raised to power b
* @a: The integer
* @b: The power
* Return: Result
*/
unsigned int powa(unsigned int a, unsigned int b)
{
	unsigned	int	power,	result	=	1;

	if	(b == 0)
		return	(result);
	for	(power = 0; power < b; power++)
	{
		result	*=	a;
	}
	return	(result);
}
/**
* binary_to_uint - converts a binary number to a decimal number
* @b: Pointer to the binary number
* Return: The decimal number or 0
*/

unsigned	int	binary_to_uint(const char *b)
{
	unsigned	int	j, decint, length, a, i;
	decint = length = 0;

	if	(b == NULL)
		return	(0);
	/*calculate the length of the string*/
	while	(b)
	{
		length++;
		b++;
	}
	/*return 0 if any character is not a binary digit*/
	for	(i = 0; i < length; i++)
	{
		if	(b[i] != '0' && b[i] != '1')
			return	(0);
	}
	a = length - 2;

	for	(j = 0; j  < a; j++)
	{
		decint += _atoi(b + (a - j - 1)) * powa(2, j);
	}
	return	(decint);
}
