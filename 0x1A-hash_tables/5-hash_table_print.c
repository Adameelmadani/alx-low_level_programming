#include "hash_tables.h"

/**
  * hash_table_print - print hash table
  * @ht: hash table
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp;
	unsigned long int c = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (c == 0)
				printf("'%s': '%s'", temp->key, temp->value);
			else
				printf(", '%s': '%s'", temp->key, temp->value);
			c++;
			temp = temp->next;
		}
	}
	printf("}\n");
}
