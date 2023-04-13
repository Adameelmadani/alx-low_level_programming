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
	int i = 0;
	int size1 = 0;
	int size2 = 0;
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
	for (i = 0; i < size2 + size1 && s2 != NULL; i++)
	{
		p[i + size1] = s2[i];
	}
	return (p);
}
