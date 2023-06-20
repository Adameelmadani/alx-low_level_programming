#include "lists.h"

/**
  * insert_dnodeint_at_index - insert node at a given index
  * @h: head
  * @idx: idx
  * @n: data
  * Return: return its addres of NULL
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0, l = 0;
	dlistint_t *temp;
	dlistint_t *s_temp;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	if (h == NULL)
		return (NULL);
	temp = *h;
	while (temp)
	{
		temp = temp->next;
		l++;
	}
	if (l < idx)
	{
		free(new_node);
		return (NULL);
	}
	temp = *h;
	s_temp = temp;
	if (l == 0)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		temp = new_node;
		return (new_node);
	}
	if (idx == l)
	{
		for (i = 0; i < idx; i++)
		{
			s_temp = temp;
			temp = temp->next;
		}
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = s_temp;
		s_temp->next = new_node;
		return (new_node);
	}
	for (i = 0; i <= idx; i++)
	{
		s_temp = temp;
		temp = temp->next;
	}
	new_node->n = n;
	new_node->next = s_temp;
	new_node->prev = s_temp->prev;
	if (s_temp->prev != NULL)
		(s_temp->prev)->next = new_node;
	s_temp->prev = new_node;
	return (new_node);
}
