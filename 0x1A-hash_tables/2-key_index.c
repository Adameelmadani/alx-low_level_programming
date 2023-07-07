#include "hash_tables.h"

/**
  * key_index - key index
  * @key: key
  * @size: size
  * Return: s
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int s = hash_djb2(key) % size;

	return (s);
}
