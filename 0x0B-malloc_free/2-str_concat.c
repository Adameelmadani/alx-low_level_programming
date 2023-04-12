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
	unsigned int i, j;
	unsigned int size = strlen(s1) + strlen(s2);
	unsigned int size1 = strlen(s1);
	unsigned int size2 = strlen(s2);
	char *p = malloc((size * sizeof(char)) + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		i = 0;
		*(p + i) = NULL;
		i++;
	} else
	{
		for (i = 0; i < size1; i++)
		{
			*(p + i) = *(s1 + i);
		}
	}
	if (s2 == NULL)
	{
		*(p + i) = NULL;
	} else
	{
		for (j = 0; j < size2; j++)
		{
			*(p + i) = *(s2 + j);
			i++;
		}
	}
	return (p);
}
