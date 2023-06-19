#include "lists.h"

/**
  * add_dnodeint - add new node
  * @head: head addres
  * @n: int data
  * Return: null or addres of new node
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	new_node->prev = NULL;
	*head = new_node;
	return (*head);
}
