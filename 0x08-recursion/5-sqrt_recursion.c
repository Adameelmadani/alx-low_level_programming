#include <stdio.h>
#include "main.h"
#include <math.h>

/**
  * _sqrt_recursion - sqrt
  * @n: integer
  * Return: integer
  */

int _sqrt_recursion(int n)
{
	double sqrtD;
	int sqr;
	int a = -1;

	if (n >= 0)
	{
		sqrtD = sqrt(n);
		sqr = sqrt(n);
		if (sqr == sqrtD)
		{
			a = sqr;
		}
	}
	return (a);
}
