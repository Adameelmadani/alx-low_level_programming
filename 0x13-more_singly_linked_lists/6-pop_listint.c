#include "lists.h"
/**
 * pop_listint - delete the head node and returns its data
 * @head: head pointer
 * Return: integer, data
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp = NULL;

	if (!head)
		return (0);
	if (!*head)
		return (0);
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
