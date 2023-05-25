#include "main.h"
/**
  * set_bit - set ibt
  * @n: int
  * @index: index
  * Return: int
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	/* using operators */
	*n = ((1UL << index) | *n);
	return (1);
}
