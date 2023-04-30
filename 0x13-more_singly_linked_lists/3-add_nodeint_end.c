#include "lists.h"

/**
  * add_nodeint_end - add new node at the end
  * @head: head address
  * @n: integer
  * Return: listint_t
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = NULL;
	listint_t *stemp = NULL;

	if (!head)
		return (NULL);
	temp = *head;
	while (temp)
	{
		stemp = temp;
		temp = temp->next;
	}
	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (stemp)
		stemp->next = temp;
	else
		*head = temp;
	return (temp);
}
