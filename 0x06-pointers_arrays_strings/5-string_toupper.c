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
	int i;
	char *p = NULL;
	int l[strlen(s)];
	
	i = 0;
	while(s[i])
	{
		l[i] = toupper(s[i]);
		p[i] = l[i];
		i++;
	}
	return (p);
}
