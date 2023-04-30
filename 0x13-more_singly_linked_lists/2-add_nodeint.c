#include "lists.h"

/**
  * add_nodeint - add nodes
  * @head: head of list
  * @n: integer
  * Return: address of the first node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *stemp = NULL;

	if (!head)
		return (NULL);
	stemp = malloc(sizeof(listint_t));
	if (!stemp)
		return (NULL);
	stemp->n = n;
	stemp->next = *head;
	*head = stemp;
	return (stemp);
}
