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
	list_t *temp = NULL;
	list_t *sTemp = NULL;

	if (head)
	{
		temp = head->next;
		while (temp)
		{
			sTemp = temp->next;
			free(temp->str);
			free(temp);
			temp = sTemp;
		}
		free(head->str);
		free(head);
	}
}
