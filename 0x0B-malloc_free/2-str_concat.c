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
	unsigned int i = 0, j = 0;
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	char *p;

	for (size1 = 0; s1[size1] != '\0' && s1 != NULL; size1++)
		;
	for (size2 = 0; s2[size2] != '\0' && s2 != NULL; size2++)
		;
	p = (char *)malloc(sizeof(char) * (size1 + size2 + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1 && s1 != NULL; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < size2 && s2 != NULL; j++)
	{
		p[i] = s2[j];
		i++;
	}
	return (p);
}
