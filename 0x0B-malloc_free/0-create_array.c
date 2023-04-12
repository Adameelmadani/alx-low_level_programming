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
	int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *) malloc(size * sizeof(char));
	while (*(p + i))
	{
		*(p + i) = (c + i);
		i++;
	}
	free(p);
	return (p);
}
