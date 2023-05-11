#include "main.h"

/**
* _sqrt_recursion - returns the positive square root of an integer n
* @n: The integer whose square root is to be found
* Return: The square root of the integer
*/

int _sqrt_recursion(int n)
{
	return	(sqroot(n, 1));
}

/**
* sqroot - checks if p is the squareroot of q
* @p: An integer
* @q: An integer
* Return: The square root of the integer
*/

int	sqroot(int q, int p)
{
	int	sqroot;

	sqroot	=	p	*	p;
	if	(sqroot == q)
		return	(p);
	if	(sqroot > q)
		return	(-1);
	return	(sqroot(q, p + 1));
}
