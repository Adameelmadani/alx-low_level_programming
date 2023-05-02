#include <stdio.h>
#include "main.h"

/**
  * _memset - mamory set
  * @s: s
  * @b: b
  * @n: n
  * Return: always 0
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
