#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_list - printf a list
  * @h: list_t ptr
  * Return: size_t
  */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
