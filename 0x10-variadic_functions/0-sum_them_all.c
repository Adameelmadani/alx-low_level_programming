#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
  * sum_them_all - sum of all numbers
  * @n: integer
  * Return: the sum
  */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(list, int);
	va_end(list);
	return (sum);
}
