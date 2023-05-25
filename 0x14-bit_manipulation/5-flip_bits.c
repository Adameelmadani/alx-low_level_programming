#include "main.h"
/**
  * flip_bits - filp it
  * @n: int
  * @m: int
  * Return: un int
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j = 0, set = 0;
	unsigned long int a, b = n ^ m;

	for (j = 63; j >= 0; j -= 1)
	{
		a = b >> j;
		if (a & 1)
			set += 1;
	}
	return (set);
}
