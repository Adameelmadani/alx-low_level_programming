#include <stdio.h>
#include "main.h"
#include <string.h>

/**
  * is_palindrome - function
  * @s: char
  * Return: integer
 */

int is_palindrome(char *s)
{
	int size = strlen(s) - 1;
	int i = 0;

	if (size % 2 == 0)
	{
		if (*(s + i) == *(s + size - i))
		{

