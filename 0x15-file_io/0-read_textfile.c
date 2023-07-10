#include "main.h"
/**
* read_textfile -  reads a text file and prints it to the sstandard output
* @filename: Name of the file
* @letters: Number of letters to read
* Return: 0 or actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t	fdes;
	ssize_t sred;
	ssize_t wrote;
	char	*buffer;

	fdes = open(filename, O_RDONLY);

	if (fdes == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	sred = read(fdes, buffer, letters);
	wrote = write(STDOUT_FILENO, buffer, sred);

	free(buffer);
	close(fdes);
	return (wrote);
}
