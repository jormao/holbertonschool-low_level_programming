#include "hash_tables.h"

/**
 * hash_table_create: Function to create a hash table
 * size: size of the hash table
 * 
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;
	unsigned long int i;

	if (size <= 0)
		return NULL;
	
	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return NULL;
	
	hashtable->size = size;

	hashtable->array = malloc(sizeof(hash_node_t *) * size);
		if (hashtable->array == NULL)
			return NULL;
	
	for (i = 0; i < size; i++)
		hashtable->array[i] = NULL;

	return (hashtable);
}
