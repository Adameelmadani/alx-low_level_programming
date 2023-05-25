#include "main.h"
/**
  * binary_to_uint - convert to unsigned int
  * @b: string
  * Return: number uint
  */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int numb = 0;

	if (!b)
		return (0);
	for (j = 0; b[j]; j++)
	{
		if (b[j] < (0 + '0') || b[j] > (1 + '0'))
			return (0);
		numb = 2 * numb + (b[j] - '0');
	}
	return (numb);
}
