#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_numbers - print all numbers
  * @separator: comma or NULL
  * @n: number of numbers
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	if (n != 0)
	{
		va_start(list, n);
		for (i = 0; i < n - 1; i++)
		{
			printf("%d", va_arg(list, int));
			if (separator != NULL)
				printf("%s", separator);
		}
		printf("%d", va_arg(list, int));
	}
	va_end(list);
	printf("\n");
}
