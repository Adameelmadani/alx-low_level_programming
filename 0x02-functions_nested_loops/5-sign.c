#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	int a;

	if (n == 0)
	{
		_putchar('0' + 0);
		a = 0;
	} else if (n < 0)
	{
		_putchar('-');
		a = -1;
	} else
	{
		_putchar('+');
		a = 1;
	}
	return (a);
}
