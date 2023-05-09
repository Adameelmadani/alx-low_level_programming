#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void closeit(int fd);
/**
  * main - main function
  * @argc: argc
  * @argv: argv
  * Return: 1 or -1
  */

int main(int argc, char *argv[])
{
	char *buff[1024];
	int fd, sfd;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (access(argv[1], F_OK) != 0)
		fd = -2;
	else
		fd = open(argv[1], O_RDONLY);
	if (fd == -1 || fd == -2)
	{
		if (fd == -1)
		{
			if (close(fd) == -1)
				closeit(fd);
		}
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	sfd = open(argv[2], O_WRONLY | O_CREAT, 0664);
	if (sfd == -1 || ftruncate(sfd, 0) == -1)
	{
		if (close(sfd) == -1)
			closeif(sfd);
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	read(fd, buff, 1024);
	write(sfd, buff, 1024);
	if (close(fd) == -1)
		closeit(fd);
	if (close(sfd) == -1)
		closeit(sfd);
	return (1);
}
/**
  * closeit - close
  * @fd: fd
  */
void closeit(int fd)
{
	dprintf(2, "Error: Can't close fd %d\n", fd);
	exit(100);
}
