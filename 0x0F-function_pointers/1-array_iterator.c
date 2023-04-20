#include "function_pointers.h"

/**
  * array_iterator - array it
  * @array: array
  * @size: size
  * @action: funct
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}
