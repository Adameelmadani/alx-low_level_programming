#include "lists.h"

/**
  * free_dlistint - free a linked list
  * @head: head
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *s_temp;

	while (temp)
	{
		s_temp = temp->next;
		free(temp);
		temp = s_temp;
	}
}
