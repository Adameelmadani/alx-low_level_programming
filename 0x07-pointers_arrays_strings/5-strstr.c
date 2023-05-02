#include <stdio.h>
#include "main.h"
#include <string.h>

/**
  * _strstr - strstr
  * @haystack: haystack
  * @needle: needle
  * Return: char pointer
  */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int a = 0;
	int c = 0;

	while (*(haystack + i))
	{
		a = 0;
		while (*(haystack + i + a) == *(needle + a))
		{
			a++;
			if (!(*(needle + a)))
			{
				c = 1;
				break;
			}
			if (!(*(haystack + i + a)))
			{
				break;
			}
		}
		i++;
	}
	if (c == 0)
	{
		needle = NULL;
	}
	return (needle);
}
