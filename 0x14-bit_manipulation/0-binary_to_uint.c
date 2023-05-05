#include "main.h"
/**
  * binary_to_uint - convert to unsigned int
  * @b: string
  * Return: number uint
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int size = strlen(b);
	unsigned int i = 0, s = 1, l = 0, number = 0, n = 0, j = 0;

	if (!b)
		return (0);
	for (i = 0; i < size ; i++)
	{
		s = 1;
		if (b[size - 1 - i] != 49 && b[size - 1 - i] != 48)
			return (0);
		for (j = 0; j < l; j++)
			s = 2 * s;
		n = (b[size - 1 - i] - '0') * s;
		number = n + number;
		l++;
	}
	return (number);
}
