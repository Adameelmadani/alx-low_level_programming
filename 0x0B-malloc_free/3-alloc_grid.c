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
	int i;
	int j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(*p) * height);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			{
				p[i][j] = 0;
			}
	}
	return (p);
}
