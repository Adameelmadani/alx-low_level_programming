#include <stdio.h>
#include "main.h"

/**
  * swap_int - swap to integers
  * @a: integer a
  * @b: integer b
  * Return: always 0
  */

void swap_int(int *a, int *b)
{
	int aa = *a;

	*a = *b;
	*b = aa;
}
