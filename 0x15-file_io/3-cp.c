#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _buffer - create a buffer of 1024 bits
* @readfile: File whose buffers contents is to be stored in
* Return: Pointer to the created beffer
*/
char *_buffer(char *readfile)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", readfile);
		exit(99);
	}

	return (buff);
}

/**
 * _close - Closes the file with the spec file descriptors.
 * @fdes: The file descriptor of file  to be closed.
 * Return: 0
 */
int _close(int fdes)
{
	int cls;

	cls = close(fdes);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fdes %d\n", fdes);
		exit(100);
	}
	return (0);
}


/**
* main - copies content from one file to anoyher
* @ac: Number of command line args
* @av: Commandline args
* Return: Always 0.
*/
int main(int ac, char **av)
{
	int strno;
	int rdfrm;
	int wrto;
	int wrt;
	char *buff;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = _buffer(av[2]);
	rdfrm = open(av[1], O_RDONLY);
	strno = read(rdfrm, buff, 1024);
	wrto = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (rdfrm == -1 || strno == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(buff);
			exit(98);
		}
		wrt = write(wrto, buff, strno);
		if (wrto == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(buff);
			exit(99);
		}
		strno = read(rdfrm, buff, 1024);
		wrto = open(av[2], O_WRONLY | O_APPEND);
	} while (strno > 0);

	free(buff);
	_close(rdfrm);
	_close(wrto);
	return (0);
}
