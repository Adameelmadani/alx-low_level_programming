#include "main.h"
#include <string.h>

/**
  * append_text_to_file - append it
  * @filename: file name
  * @text_content: text content
  * Return: int
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, a;

	if (!filename)
		return (-1);
	if (access(filename, F_OK) != 0)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	a = write(fd, text_content, strlen(text_content));
	close(fd);
	if (a == -1)
		return (-1);
	return (1);
}
