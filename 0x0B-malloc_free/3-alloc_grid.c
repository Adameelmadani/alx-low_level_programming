#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - function that alloc pointer integer
  * @width: integer
  * @height: integer
  * Return: int pointer to pointer
  */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int s = width + height;
	char **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **)malloc(sizeof(int) * s);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
	{
		**(p + i) == 0;
	}
	return (p);
}
