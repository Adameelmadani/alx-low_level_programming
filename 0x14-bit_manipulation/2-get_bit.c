#include "main.h"

/**
  * get_bit - get bit
  * @n: int
  * @index: index
  * Return: int
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int numberinbit;

	if (index > 63)
		return (-1);
	numberinbit = (n >> index) & 1;
	return (numberinbit);
}
