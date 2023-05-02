#include "lists.h"

/**
  * free_listint2 - free list second time
  * @head: head address
  */

void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *stemp = NULL;

	if (head)
	{
		temp = *head;
		while (temp)
		{
			stemp = temp->next;
			free(temp);
			temp = stemp;
		}
		*head = NULL;
	}
}
