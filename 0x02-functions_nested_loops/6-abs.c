#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */

int _abs(int n)
{
	int a;

	if (n < 0)
	{
		a = -n;
	} else
	{
		a = n;
	}
	return (a);
}
