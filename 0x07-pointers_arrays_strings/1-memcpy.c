#include "main.h"
#include <stdio.h>

/**
  * _memcpy - memcpy function
  * @dest: first string array
  * @src: src
  * @n: integer
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
