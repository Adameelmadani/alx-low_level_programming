#include "main.h"
/**
  * print_binary - print binary number
  * @n: unslongint
  */
void print_binary(unsigned long int n)
{
	int j = 0;
	int set = 0;
	unsigned long int number = 0;

	for (j = 63; j >= 0; j -= 1)
	{
		number = n >> j;
		if (number & 1)
		{
			_putchar('1');
			set += 1;
		}
		else if (set)
			_putchar('0');
	}
	if (!set)
		_putchar('0');
}
