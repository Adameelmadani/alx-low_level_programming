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
	int j = 0;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(*p) * width);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		p[i] = malloc(sizeof(int) * height);
		if (p[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			{
				p[i][j] = 0;
			}
	}
	return (p);
}
