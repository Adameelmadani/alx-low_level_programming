#include "lists.h"

/**
  * free_listint - free list
  * @head: head of list
  */

void free_listint(listint_t *head)
{
	listint_t *temp = NULL;
	listint_t *stemp = NULL;

	if (head)
	{
		temp = head;
		while (temp)
		{
			stemp = temp->next;
			free(temp);
			temp = stemp;
		}
	}
}
