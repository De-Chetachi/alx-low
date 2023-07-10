#include "main.h"

/**
* append_text_to_file - appends text at the end of a file.
* @filename: Name of the file to be created
* @text_content: A NULL terminated string t be appended in the file
* Return: 1 or -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fdes;
	int wrote;
	int count = 0;


	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[count])
			count++;
	}
	fdes = open(filename, O_APPEND | O_WRONLY);
	wrote = write(fdes, text_content, count);


	if (fdes == -1 || wrote == -1)
		return (-1);
	close(fdes);
	return (1);
}
