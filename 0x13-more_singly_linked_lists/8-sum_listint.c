#include "lists.h"

/**
<<<<<<< HEAD
  * sum_listint - sum of all datas
  * @head: head
  * Return: integer
  */
=======
 * sum_listint - sum of all datas
 * @head: head
 * Return: integer
 */
>>>>>>> ee7896719aad716385a21426ea44be5381931cfe
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
