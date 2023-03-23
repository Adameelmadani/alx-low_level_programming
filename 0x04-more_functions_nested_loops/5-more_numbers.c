#include "main.h"

/**
  * more_numbers - print numbers
  *
  * Return: always 0
  */

void more_numbers(void)
{
	int i;
	int j;
	int l;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			l = j % 10;
			k = j - l;
			if (k != 0)
			{
				_putchar(1 + '0');
			}
			_putchar(l + '0');
		}
		_putchar('\n');
	}
}
