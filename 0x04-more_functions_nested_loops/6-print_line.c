#include "main.h"

/**
  * print_line - print numbers
  * @n: number of times
  * Return: always 0
  */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
