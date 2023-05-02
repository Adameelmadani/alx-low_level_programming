#include <string.h>
#include <stdio.h>
#include "main.h"

/**
  * _strcpy - str copy
  * @dest: char pointer
  * @src: char pointer
  * Return: dest
  */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
