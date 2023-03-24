#include "main.h"

/**
  * print_number - print numbers
  * @n: number of times
  */

void print_number(int n)
{
	int i;
	int j;
	int k;
	int l;
	int m;
	int s;

	i = n;
	j = 0;
	m = 0;
	if (i < 0)
	{
		i = -i;
		m++;
	}
	if (i == 0)
	{
		_putchar('0' + 0);
	} else
	{
		while (i != 0)
		{
			i = i / 10;
			j++;
			s = s * 10;
		}
		for (k = 0; k < j; k++)
		{
			if (k == 0 && m == 1)
			{
				_putchar('-');
			}
			s = s / 10;
			l = n / s;
			n = n - l * s;
			_putchar('0' + l);
		}
	}
}
