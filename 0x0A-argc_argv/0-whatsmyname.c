#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
* main - prints its name, followed by a new line
* @argc: Number of arguments
* @argv: Pointer to an array
* Return: 0
*/

int	main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return	(0);
}
