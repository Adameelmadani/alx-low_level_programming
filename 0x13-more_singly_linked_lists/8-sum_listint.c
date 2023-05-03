#include "lists.h"

/**
 * sum_listint - sum of all datas
 * @head: head
 * Return: integer
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = NULL;
	int sum = 0;

	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
