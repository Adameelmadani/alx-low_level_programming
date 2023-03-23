#include "main.h"

/**
  * _isdigit - return uppcase
  * @c: char
  * Return: always 0
  */

int _isdigit(int c)
{
	int a;

	a = 0;
	if (c >= 48 && c <= 57)
	{
		a = 1;
	}
	return (a);
}
