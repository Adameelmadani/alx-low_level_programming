#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - print all numbers
  * @separator: comma or NULL
  * @n: number of numbers
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;
	char *str;

	if (n != 0)
	{
		va_start(list, n);
		for (i = 0; i < n - 1; i++)
		{
			str = va_arg(list, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			if (separator != NULL)
				printf("%s", separator);
		}
		str = va_arg(list, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
	}
	va_end(list);
	printf("\n");
}
