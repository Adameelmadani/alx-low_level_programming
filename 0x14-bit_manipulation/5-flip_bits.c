#include "main.h"
/**
  * flip_bits - filp it
  * @n: int
  * @m: int
  * Return: un int
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a = 0;

	if (n == 0)
		a = 0;
	if (m == 1)
		a = 1;
	return (a);
}
