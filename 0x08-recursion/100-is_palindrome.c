#include <stdio.h>
#include "main.h"
#include <string.h>

/**
  * fuc - function
  * @s: char
  * @i: integer
  * @size: size
  * Return: integer
 */

int fuc(int i, char *s, int size)
{
	if (*(s + i) == *(s + size - 1 - i))
	{
		if (i == (size / 2) - 1)
		{
			return (1);
		}
		return (fuc(i + 1, s, size));
	}
	return (0);
}

/**
  * is_palindrome - main
  * @s: char
  * Return: integer
  */

int is_palindrome(char *s)
{
	int i = 0;
	int size = strlen(s);

	return (fuc(i, s, size));
}
