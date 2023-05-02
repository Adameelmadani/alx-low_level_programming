#include <stdlib.h>

/**
  * _calloc - calloc function
  * @nmemb: number of elements
  * @size: the size of bytes
  * Return: void *
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i  = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
		p[i] = 0;
	return (p);
}
