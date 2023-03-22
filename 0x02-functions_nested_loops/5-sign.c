#include "main.h"

/**
 * print_sign - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
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
