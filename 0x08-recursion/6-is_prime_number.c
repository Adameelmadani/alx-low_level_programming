#include <stdio.h>
#include "main.h"
/**
  * is_prime_number - function
  * @n: integer
  * Return: integer
  */

int is_prime_number(int n)
{

	if (n <= 1 || (n % 2 == 0))
	{
		return (0);
	}

