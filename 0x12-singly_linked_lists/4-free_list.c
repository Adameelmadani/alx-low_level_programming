#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * free_list - free it
  * @head: head of list
  */

void free_list(list_t *head)
{
	if (!head)
		exit(0);
	list *temp = head->next;

	while(temp)
	{
		free(temp->str);
		temp = temp->next;
	}
}
