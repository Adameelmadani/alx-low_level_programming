#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    unsigned long int i = 0;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas", "hetairasValue");
    hash_table_set(ht, "mentioner", "mentionerValue");
    hash_table_set(ht, "bet", "bettt");
    hash_table_set(ht, "df", "dfff");
    for (i = 0; i < ht->size; i++)
    {
	    while (ht->array[i])
	    {
		    printf("%lu-%s : %s\n",i, (ht->array[i])->key, (ht->array[i])->value);
		    (ht->array[i]) = (ht->array[i])->next;
	    }
    }
    return (EXIT_SUCCESS);
}
