#include "main.h"

/**
 * _isalpha - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _isalpha(int c)
{
	int a;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		a = 1;
	} else
	{
		a = 0;
	}
	return (a);
}
