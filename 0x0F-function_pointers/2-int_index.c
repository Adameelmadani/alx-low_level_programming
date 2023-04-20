#include "function_pointers.h"

/**
  * int_index - int index
  * @array: array
  * @size: size
  * @cmp: functi
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
