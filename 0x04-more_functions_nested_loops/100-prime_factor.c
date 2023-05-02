#include <stdio.h>

/**
  * main - print numbers
  *
  * Return: 0
 */

int  main(void)
{
	long int i;
	int l;
	long int k;

	for (i = 612852475143; i > 3; i--)
	{
		l = 0;
		if (612852475143 % i == 0)
		{for (k = i; k > 0; i = i - 2)
			{
				if (i % k == 0)
				{
					l++;
				}
				if (l == 3)
				{
					break;
				}
			}
				if (l == 2)
				{
					printf("%ld", i);
					break;
				}
		}
	}
	return (0);
}
