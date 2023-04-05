#include <stdio.h>
#include "main.h"
#include <string.h>

/**
  * _print_rev_recursion - puts in recursion
  * @s: string pointer
  */

void _print_rev_recursion(char *s)
{
	int i = 0;
	int size = strlen(s) - 1;

	if (*(s + size))
	{
		_putchar(*(s + size));
		_print_rev_recursion((s - ++i));
	} else
	{
		_putchar('\n');
	}
}
