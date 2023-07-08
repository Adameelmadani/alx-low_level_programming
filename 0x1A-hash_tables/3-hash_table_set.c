#include "hash_tables.h"

/**
  * create_node - create_node
  * @key: key
  * @value: value
  * Return: hash_node_t
  */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (NULL);
	node->key = malloc(strlen(key) + 1);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL)
	{
		free(node);
		free(node->key);
		return (NULL);
	}
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;
	return (node);
}

/**
  * search - search for node
  * @temp: temp
  * @key: key
  * Return: return NULL or pointer
  */
hash_node_t *search(hash_node_t *temp, const char *key)
{
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}

/**
  * hash_table_set - hash table set
  * @ht: hash table
  * @key: key
  * @value: value
  * Return: int
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = create_node(key, value);
		if (ht->array[index] == NULL)
			return (0);
		return (1);
	}
	temp = search(ht->array[index], key);
	if (temp)
	{
		strcpy(temp->value, value);
		return (1);
	}
	temp = ht->array[index];
	ht->array[index] = create_node(key, value);
	if (ht->array[index] == NULL)
		return (0);
	(ht->array[index])->next = temp;
	return (1);
}
