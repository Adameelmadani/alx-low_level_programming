#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * Perror - print error
  * @argc: arg
  * @argv: arg
  */

void Perror(__attribute__((unused)) int argc, __attribute__((unused))
		char *argv[])
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}

/**
  * main - main function
  * @argc: argcoun
  * @argv: argvect
  * Return: always 0
  */

int main(int argc, char *argv[])
{
	int i, j, s;
	unsigned long c, n, m;

	if (argc != 3)
	{
		Perror(1, argv);
		exit(98);
	}
	for (i = 1; i < 3; i++)
	{
		s = (int)strlen(argv[i]);
		for (j = 0; j < s; j++)
		{
			if (!(argv[i][j] >= 48 && argv[i][j] <= 57))
			{
				Perror(1, argv);
				exit(98);
			}
		}
	}
	c = atoi(argv[1]) * atoi(argv[2]);
	n = c;
	m = 1;
	if (c == 0)
		i = -2;
	while (c != 0)
	{
		c = c / 10;
		m = m * 10;
	}
	m = m / 10;
	for (; m != 0; m = m / 10)
	{
		c = n / m;
		n = n - c * m;
		_putchar(c + '0');
	}
	if (i == -2)
		_putchar(0 + '0');
	_putchar('\n');
	return (0);
}
