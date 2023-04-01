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

	*s = *s + i;
	while (*s)
	{
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
