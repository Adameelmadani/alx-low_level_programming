#include "main.h"

/**
  * read_textfile - read textfile
  * @filename: file
  * @letters: number of letters
  * Return: size
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filed;
	ssize_t ret_read, m;
	char *str;

	if (filename == NULL)
		return (0);
	filed = open(filename, O_RDONLY);
	if (filed == -1)
		return (0);
	str = malloc(letters);
	if (str == NULL)
		return (0);
	ret_read = read(filed, str, letters);
	m = write(STDOUT_FILENO, str, ret_read);
	if (close(filed) == -1)
		return (0);
	free(str);
	return (m);
}
