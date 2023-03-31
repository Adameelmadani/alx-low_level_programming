#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * *_strcat - concatinate
  * @dest: dest poiter
  * @src: src pointer
  * Return: the pointer
  */

char *_strcat(char *dest, char *src)
{
	char *p = strcat(dest, src);

	return (p);
}
