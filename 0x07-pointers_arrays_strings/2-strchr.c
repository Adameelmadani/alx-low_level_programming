#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * _strchr - strchar
  * @s: s
  * @c: c
  * Return: s
  */

char *_strchr(char *s, char c)
{
	int i = 0;
	int a = 0;
	int j = 0;
	char s2[100];

	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			a++;
			break;
		}
		i++;
	}
	if (a == 1)
	{
		while (*(s + i))
		{
			s2[j] = *(s + i);
			i++;
			j++;
		}
		s = s2;
	} else
	{
		s = NULL;
	}
	return (s);
}
