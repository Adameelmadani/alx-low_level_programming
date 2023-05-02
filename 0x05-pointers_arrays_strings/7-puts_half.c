#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * puts_half - print half of string
  * @str: string pointer
  */

void puts_half(char *str)
{
	int i;
	int size = strlen(str);
	int n;

	if (size % 2 == 0)
	{
		n = size / 2;
	} else
	{
		n = (size / 2) + 1;
	}
	for (i = n; i < size; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
