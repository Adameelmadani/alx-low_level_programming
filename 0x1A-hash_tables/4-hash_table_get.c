#include "hash_tables.h"

/**
  * hash_table_get - getter of hash_table
  * @ht: ht
  * @key: key
  * Return: value or NULL
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int i = 0;

	if (ht == NULL)
		return (NULL);
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
