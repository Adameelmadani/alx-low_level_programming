#include "hash_tables.h"

/**
  * hash_table_create - create a hash table
  * @size: size of the array
  * Return: hash_table_t or Null
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int i = 0;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);

	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * hash->size);
	if (hash->array == NULL)
		return (NULL);

	for (i = 0; i < hash->size; i++)
		hash->array[i] = NULL;
	return (hash);
}
