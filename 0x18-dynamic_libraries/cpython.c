#include "cpython.h"

/**
* add - adds two numbers
* @a: first num
* @b: second num
* Return: c
*/

int add(int a, int b)
{
	int c = a + b;

	return (c);
}

/**
* sub - subtraction of two numbers
* @a: first num
* @b: second num
* Return: c
*/
int sub(int a, int b)
{
	int c = a - b;

	return (c);
}

/**
* mul - multiplication of two numbers
* @a: first num
* @b: second num
* Return: c
*/
int mul(int a, int b)
{
	int c = a * b;

	return (c);
}

/**
* div - division of two numbers
* @a: first num
* @b: second num
* Return: c
*/
int div(int a, int b)
{
	int c = a / b;

	return (c);
}

/**
* mod - remainder of division two numbers
* @a: first num
* @b: second num
* Return: c
*/
int mod(int a, int b)
{
	int c = a % b;

	return (c);
}
