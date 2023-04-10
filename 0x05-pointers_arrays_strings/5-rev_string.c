#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * rev_string - print a char
  * @s: string pointer
  */

void rev_string(char *s)
{
	int i;
	int size = strlen(s);
	char l[100];

	for (i = 0; i < size / 2; i++)
	{
		*l = *(s + i);
		*(s + i) = *(s + size - 1 - i);
		*(s + size - 1 - i) = *l;
	}
}
