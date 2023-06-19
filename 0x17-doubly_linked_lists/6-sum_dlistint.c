#include "lists.h"

/**
  * sum_dlistint - sum of all datas
  * @head: head
  * Return: return sum
  */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		i = i + temp->n;
		temp = temp->next;
	}
	return (i);
}
