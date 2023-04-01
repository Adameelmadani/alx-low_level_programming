#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * _puts - print a char
  * @str: string pointer
  */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
