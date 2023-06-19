#include "lists.h"

/**
  * get_dnodeint_at_index - get node at index
  * @head: head
  * @index: index
  * Return: return addres of the nth node or null
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
