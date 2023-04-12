#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
  * _strdup - str dup it
  * @str: string pointer
  * Return: char pointer
  */

char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int size = strlen(str);
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	p = malloc(size * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(p + i) = *(str + i);
	}
	p[i] = '\0';
	return (p);
}
