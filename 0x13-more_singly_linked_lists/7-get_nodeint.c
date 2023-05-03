#include "lists.h"
<<<<<<< HEAD

/**
  * get_nodeint_at_index - get the nth node
  * @head: head
  * @index: index
  * Return: the nth node
  */
=======
/**
 * get_nodeint_at_index - get the nth node
 * @head: head
 * @index: index
 * Return: the nth node
 */
>>>>>>> ee7896719aad716385a21426ea44be5381931cfe
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = NULL;
	listint_t *stemp = NULL;

	if (!head)
		return (NULL);
	temp = head;
	stemp = temp;
	for (i = 0; temp && i < index + 1; i++)
	{
		stemp = temp;
		temp = temp->next;
	}
	if ((i - 1) != index)
		return (NULL);
	return (stemp);
}
