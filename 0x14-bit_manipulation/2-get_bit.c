#include "main.h"

/**
  * get_bit - get bit
  * @n: int
  * @index: index
  * Return: int
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int j = 0;
	int l = 0;

	j = n * 0 + 1;
	while (j != 0)
	{
		index++;
	}
	if (index == 0)
		l = 1;
	return (l);
}
