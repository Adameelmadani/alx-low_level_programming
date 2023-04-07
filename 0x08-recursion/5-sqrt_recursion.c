#include <stdio.h>
#include "main.h"

/**
  * _sqrti - sqrt
  * @n: integer
  * @i: integer
  * Return: integer
  */

int _sqrti(int i, int n)
{
	int rac = i * i;

	if (rac == n)
	{
		return (i);
	} else if (i >= ((n / 2) + 1))
	{
		return (-1);
	}
	return (_sqrti(i + 1, n));
}

/**
  * _sqrt_recursion - sq
  * @n: integer
  * Return: integer
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrti(1, n));
}
