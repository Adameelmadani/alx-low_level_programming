#include <stdlib.h>

/**
  * array_range - array range
  * @min: min
  * @max: max
  * Return: int pointer
  */

int *array_range(int min, int max)
{
	int *p;
	int i = 0, j = 0;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
