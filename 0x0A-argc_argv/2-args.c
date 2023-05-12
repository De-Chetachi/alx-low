#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
* main - prints all arguments it receives
* @argc: Number of arguments
* @argv: Pointer to an array
* Return: 0
*/

int	main(int argc, char *argv[])
{
	for	(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return	(0);
}
