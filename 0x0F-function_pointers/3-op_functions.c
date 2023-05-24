#include "3-calc.h"

/**
* op_add - returns the sum of a and b
* @a: An integer
* @b: Another integer
* Return: An integer
*/

int	op_add(int a, int b)
{
	return	((a) + (b));
}

/**
* op_sub - subtracts
* @a: An integer
* @b: Another integer
* Return: An integer
*/

int	op_sub(int a, int b)
{
	return	((a) - (b));
}

/**
* op_mul - multiplies
* @a: An integer
* @b: Another integer
* Return: An integer
*/

int	op_mul(int a, int b)
{
	return	((a) * (b));
}

/**
* op_div - divides
* @a: An integer
* @b: Another integer
* Return: An integer
*/

int	op_div(int a, int b)
{
	if	(b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return	((a) / (b));
}


/**
* op_mod -  returns the remainder of the division
* @a: An integer
* @b: Another integer
* Return: An integer
*/

int     op_mod(int a, int b)
{
	if	(b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return	((a) % (b));
}
