#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * list_len - number of elem of a list
  * @h: list_t ptr
  * Return: size_t
  */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
