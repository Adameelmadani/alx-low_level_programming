#include "main.h"
#include <stdlib.h>

/**
  * create_array - create it
  * @size: int +
  * @c: char
  * Return: char pointer
  */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *) malloc(size * sizeof(char) + 1);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	*(p + i) = '\0';
	return (p);
}
