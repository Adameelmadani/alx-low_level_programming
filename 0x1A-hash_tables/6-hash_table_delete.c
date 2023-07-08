#include "hash_tables.h"

/**
  * hash_table_delete - deleting a hash table
  * @ht: hash table
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp;
	hash_node_t *s_temp;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (temp->key)
				free(temp->key);
			if (temp->value)
				free(temp->value);
			s_temp = temp->next;
			free(temp);
			temp = s_temp;
		}
	}
	free(ht->array);
	free(ht);
}
