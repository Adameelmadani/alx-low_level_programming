#include "lists.h"

/**
  * add_dnodeint_end - add new node at the end
  * @head: header
  * @n: integer data
  * Return: addres of the new node
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp;
	dlistint_t *s_temp;

	if (new_node == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	temp = *head;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}
	while (temp)
	{
		s_temp = temp;
		temp = temp->next;
	}
	s_temp->next = new_node;
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = s_temp;
	return (new_node);
}
