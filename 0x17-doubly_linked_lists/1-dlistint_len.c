#include "lists.h"

/**
  * dlistint_len - linked list of integers
  * @h: header
  * Return: return len of linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
