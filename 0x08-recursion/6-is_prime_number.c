#include "main.h"

/**
* is_prime_number - checks if an integer is prime
* @n: A n integer
* Return: If the input integer is a prime number 1, otherwise return 0
*/

int	is_prime_number(int n)
{
	return	(quotient(n, 1));

}

/**
* quotient - checks for remainder
* @p: The interger to be checked
* @i: For iteration
* Return: If the input integer is a prime number 1, otherwise return 0
*/

int	quotient(int p, int i)
{
	int	remainder;

	remainder	=	p	%	i;

	if	(p < 2)
		return	(0);
	if	((i > 1) && (remainder == 0))
		return	(0);
	if	(p / i < i)
		return (1);
	return	(quotient(p, i + 1));
}
