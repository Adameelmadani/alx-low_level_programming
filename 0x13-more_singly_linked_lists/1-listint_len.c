#include "lists.h"

/**
  * listint_len - return number of elements in a list
  * @h: head
  * Return: return number of elem
  */
size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *temp = NULL;

	if (!h)
		return (0);
	temp = h;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
