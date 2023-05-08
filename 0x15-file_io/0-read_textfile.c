#include "main.h"

/**
  * read_textfile - read textfile
  * @filename: file
  * @letters: number of letters
  * Return: size
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *string;
	int fd, file_bytes, byte_write;

	if (!filename)
		return (0);
	if (letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	string = malloc(sizeof(char) * letters);
	if (!string)
		return (0);
	file_bytes = read(fd, string, letters);
	if (file_bytes == -1)
	{
		free(string);
		return (0);
	}
	byte_write = write(1, string, file_bytes);
	free(string);
	if (byte_write == -1)
		return (0);
	return (file_bytes);
}
