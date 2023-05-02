#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * _strncpy - copy paste
  * @dest: dest
  * @src: src
  * @n: n times
  * Return: pointer
  */

char *_strncpy(char *dest, char *src, int n)
{
	char *p = strncpy(dest, src, n);

	return (p);
}
