#include "lists.h"

/**
  * print_listint - print elements of int list
  * @h: head
  * Return: number of elements
  */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp = NULL;

	if (!h)
		return (0);
	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}
