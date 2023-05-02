#include <stdio.h>
#include "main.h"

/**
  * wildcmp - main
  * @s1: char
  * @s2: char
  * Return: integer
  */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == 'l' || *s2 == 'l')
	{
		return (0);
	}
	return (1);
}
