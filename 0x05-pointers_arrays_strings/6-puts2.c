#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * puts2 - printf % 2
  * @str: str pointer
  * Return: void
  */

void puts2(char *str)
{
	int i;
	int size = strlen(str);

	for (i = 0; i < size; i = i + 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
