#include "main.h"
/**
  * set_bit - set ibt
  * @n: int
  * @index: index
  * Return: int
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	int a = 0;

	if (index == 0)
		a = 1;
	if (*n == 1)
		a = -1;
	return (a);
}
