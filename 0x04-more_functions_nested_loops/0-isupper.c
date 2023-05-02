#include "main.h"

/**
  * _isupper - return uppcase
  * @c: char
  * Return: always 0
  */

int _isupper(int c)
{
	int a;

	a = 0;
	if (c >= 65 && c <= 90)
	{
		a = 1;
	}
	return (a);
}
