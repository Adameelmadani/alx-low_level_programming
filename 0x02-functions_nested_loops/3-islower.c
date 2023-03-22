#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	int a;

	if (c < 'a' || c > 'z')
	{
		a = 0;
	} else
	{
		a = 1;
	}
	return (a);
}
