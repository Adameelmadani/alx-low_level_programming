#include "variadic_functions.h"

/**
  * print_all - print all
  * @format: format of st
  */

void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	va_list list;
	char *str;

	while (fomat[j] != '\0')
		j++;
	while (i < j)
	{
		if (format[i] == 's')
		{
			str = va_arg(list, char *);
			if (format[i] == NULL)
				str = "(nil)";
			printf("%s", str);
		}
		if (format[i] == 'i')
			printf("%d", va_arg(list, int));
		if (format[i] == 'f')
			printf("%f", va_arg(list, float));
		if (format[i] == 'c')
			printf("%c", va_arg(list, char));
		i++;
		if (i < j)
			printf(", ");
	}
	va_end(list);
}
