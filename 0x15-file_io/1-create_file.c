#include "main.h"
#include <string.h>

/**
  * create_file - create a file
  * @filename: filename
  * @text_content: text content
  * Return: int
  */

int create_file(const char *filename, char *text_content)
{
	int fd, a;

	if (!filename)
	{
		write(1, "fail", 4);
		return (-1);
	}
	if (!text_content)
	{
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
		close(fd);
		return (1);
	}
	fd = open(filename, O_WRONLY | O_CREAT, 0600);
	if (ftruncate(fd, 0) == -1)
	{
		close(fd);
		return (-1);
	}
	a = write(fd, text_content, strlen(text_content));
	close(fd);
	if (a == -1)
	{
		write(1, "fail", 4);
		return (-1);
	}
	return (1);
}
