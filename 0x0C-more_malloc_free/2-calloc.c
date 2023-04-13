#include <stdlib.h>

/**
  * _calloc - function
  * @nmemb: number
  * @size: size of bytes
  * Return: void *
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	return (p);
}
