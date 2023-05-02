#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * add_node - add new nodes to head
  * @head: head of list
  * @str: string
  * Return: list_t pointer
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (!head || !node)
		return (NULL);
	node->next = *head;
	*head = node;
	node->str = strdup(str);
	node->len = strlen(str);
	return (node);
}
