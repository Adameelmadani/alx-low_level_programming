#include "lists.h"

/**
<<<<<<< HEAD
  * delete_nodeint_at_index - delete node at index
  * @head: head
  * @index: index
  * Return: 1 or -1;
  */
=======
 * delete_nodeint_at_index - delete node at index
 * @head: head
 * @index: index
 * Return: 1 or -1;
 */
>>>>>>> ee7896719aad716385a21426ea44be5381931cfe

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = NULL;
	listint_t *stemp = NULL;

	if (!head)
		return (-1);
	if (!*head)
		return (-1);
	temp = *head;
	for (i = 0; temp && i < index; i++)
	{
		stemp = temp;
		temp = temp->next;
		if (i == index - 1)
		{
			i++;
			break;
		}
	}
	if (i != index)
		return (-1);
	if (!stemp)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	stemp->next = temp->next;
	free(temp);
<<<<<<< HEAD
	return(1);
=======
	return (1);
>>>>>>> ee7896719aad716385a21426ea44be5381931cfe
}
