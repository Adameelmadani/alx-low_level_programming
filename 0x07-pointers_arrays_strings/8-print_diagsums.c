#include <stdio.h>
#include "main.h"

/**
  * print_diagsums - print it
  * @a: array
  * @size: integer
  */

void print_diagsums(int *a, int size)
{
	int l = 0;
	int j;
	int s = 0;
	int s2 = 0;

	for (j = 0; j < size; j++)
	{
		s = s + *(a + size * l + l);
		s2 = s2 + *(a + size * l + size - 1 - l);
		l++;
	}
	printf("%d, %d\n", s2, s);
}
