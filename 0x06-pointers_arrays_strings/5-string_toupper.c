#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * *string_toupper - check the code
 * @s: the number of elements to swap
 *
 * Return: nothing.
 */

char *string_toupper(char *s)
{
	while (*s)
	{
		if(*s <= 122 && *s >= 97)
		{
			*s = *s - 32;
		}
		s++;
	}
	return (*s);
}
