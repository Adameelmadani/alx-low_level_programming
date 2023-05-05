#include "main.h"
/**
  * print_binary - print binary number
  * @n: unslongint
  */
int first_funct(unsigned int n);

void print_binary(unsigned long int n)
{
	unsigned long int i = 1;
	char s[100];
	int m = 0, j = 0, k = 0, a = 0;

	if (first_funct(n) == 0)
		exit(0);
	while (i < n)
	{
		i = i * 2;
		j++;
	}
	j--;
	k = j;
	i = 1;
	while (j != 0)
	{
		i = i * 2;
		j--;
	}
	n = n - i;
	s[m] = (1 + '0');
	m++;
	for (j = k - 1; j >= 0; j--)
	{
		i = 1;
		for (a = 0; a < j; a++)
		{
			i = i * 2;
		}
		if (i <= n)
		{
			n = n - i;
			s[m] = (1 + '0');
			m++;
		} else
		{
			s[m] = (0 + '0');
			m++;
		}
	}
	while (m != -1)
	{
		_putchar (s[m] + '0');
		m--;
	}
}
int first_funct(unsigned int n)
{
	if (n > 3)
		return (1);
	if (n == 0 || n == 1)
		_putchar(n + '0');
	else if (n == 2)
	{
		_putchar(1 + '0');
		_putchar(0 + '0');
	} else if (n == 3)
	{
		_putchar(1 + '0');
		_putchar(1 + '0');
	}
	return (0);
}
