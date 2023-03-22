#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i;
	int j;
	int l;
	int k;
	int lone;
	int ltwo;

	j = 0;
	for (k = 0; k < 10; k++)
	{
		for (i = 0; i < 10; i++)
		{
			l = i * j;
			if (l > 9)
			{
				lone = l % 10;
				ltwo = (l - lone) / 10;
				_putchar(ltwo + '0');
				_putchar(lone + '0');
			} else
			{
				_putchar(l + '0');
			}
			if (i == 9)
			{
				_putchar('\n');
				break;
			}
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		j++;
	}
}
