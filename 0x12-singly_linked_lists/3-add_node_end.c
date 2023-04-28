#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * add_node_end - add node to end
  * @head: header
  * @str: string
  * Return: list_t
  */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *node, *temp;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;
	if (!*head)
	{
		*head = node;
		return (node);
	}
	temp = *head;
	for (i = 0; temp->next; i++)
		temp = temp->next;
	temp->next = node;
	return (node);
}
