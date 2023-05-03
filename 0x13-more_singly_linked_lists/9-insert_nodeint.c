#include "lists.h"

/**
  * insert_nodeint_at_index - insert new node at index
  * @head: head
  * @idx: index
  * @n: data
  * Return: address of new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp = NULL;
	listint_t *stemp = NULL;
	listint_t *node = NULL;

	if (!head)
		return (NULL);
	temp = *head;
	for (i = 0; temp && i < idx; i++)
	{
		stemp = temp;
		temp = temp->next;
	}
	if (i != idx)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (!stemp)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	node->next = stemp->next;
	stemp->next = node;
	return (node);
}
