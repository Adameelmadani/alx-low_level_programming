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
	char *p = malloc((size * sizeof(char)) + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	if (*str == ' ')
	{
		*p = ' ';
		*(p + 1) = '\0';
		return (p);
	}
	if (size == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		*(p + i) = *(str + i);
	}
	p[i] = '\0';
	return (p);
}
