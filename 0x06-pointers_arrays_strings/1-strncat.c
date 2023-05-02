#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * *_strncat - str cat n break
  * @dest: dest
  * @src: src
  * @n: interger
  * Return: final pointer
  */

char *_strncat(char *dest, char *src, int n)
{
	char *p = strncat(dest, src, n);

	return (p);
}
