#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - str concat
  * @s1: char
  * @s2: char
  * Return: char pointer
  */

char *str_concat(char *s1, char *s2)
{
	int unsigned i;
	int unsigned size = strlen(s1) + strlen(s2);
	int unsigned size1 = strlen(s1);
	int unsigned size2 = strlen(s2);
	char *p = malloc(size * sizeof(char) + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		*(p + i) = *(s1 + i);
	}
	for (i = size1; i < size2; i++)
	{
		*(p + i) = *(s2 + i);
	}
	p[i] = '\0';
	return (p);
}
