#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * print_rev - print a char
  * @s: string pointer
  */

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (*(s + i))
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
