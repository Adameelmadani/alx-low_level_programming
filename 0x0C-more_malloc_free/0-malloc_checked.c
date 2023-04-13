#include <stdlib.h>

/**
  * malloc_checked - checked
  * @b: u int
  * Return: void pointer
  */

void *malloc_checked(unsigned int b)
{
	void *p;

	if (b == 0)
	{
		return (NULL);
	}
	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
