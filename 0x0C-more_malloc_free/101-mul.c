#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * main - main fuction
  * @argc: arc count
  * @argv: arg vector
  * Return: always 0
  */

int main(int argc, char *argv[])
{
	int c, n, m, i;

	if (argc != 3)
	{
		error();
		exit(98);
	}
	for (i = 1; i < 3; i++)
	{
		if (atoi(argv[i]) <= 0 && strcmp("0", argv[i]) != 0)
		{
			error();
			exit(98);
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
