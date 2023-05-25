#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * handleFileError - checks if files can be opened.
 * @fileFrom: file_from.
 * @fileTo: file_to.
 * @args: arguments vector.
 * Return: no return.
 */
void handleFileError(int fileFrom, int fileTo, char *args[])
{
	if (fileFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", args[1]);
		exit(98);
	}
	if (fileTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", args[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fileFrom, fileTo, errClose;
	ssize_t bytesRead, bytesWritten;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fileFrom = open(argv[1], O_RDONLY);
	fileTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	handleFileError(fileFrom, fileTo, argv);
	bytesRead = 1024;
	while (bytesRead == 1024)
	{
		bytesRead = read(fileFrom, buffer, 1024);
		if (bytesRead == -1)
			handleFileError(-1, 0, argv);
		bytesWritten = write(fileTo, buffer, bytesRead);
		if (bytesWritten == -1)
			handleFileError(0, -1, argv);
	}
	/* close it */
	errClose = close(fileFrom);
	if (errClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileFrom);
		exit(100);
	}
	errClose = close(fileTo);
	if (errClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileTo);
		exit(100);
	}
	return (0);
}
