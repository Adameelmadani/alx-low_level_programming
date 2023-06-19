#include "lists.h"

/**
  * print_dlistint - print doubly linked list
  * @h: doubly linked list
  * Return: size_t
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		i++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
