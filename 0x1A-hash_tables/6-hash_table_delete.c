#include"hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *tmp2 = NULL;
	unsigned long int index = 0;

	if (ht != NULL)
	{
		while (index < ht->size)
		{
			tmp = ht->array[index];
			if (tmp != NULL)
			{
				if (tmp->next != NULL)
				{
					tmp = tmp->next;
					while (tmp != NULL)
					{
						tmp2 = tmp;
						tmp = tmp->next;
						free(tmp2->key);
						free(tmp2->value);
						free(tmp2);
					}
				}
				tmp = ht->array[index];
				if (tmp->key != NULL && tmp->value != NULL)
				{
					free(tmp->key);
					free(tmp->value);
				}
			}
			free(tmp);
			index++;
		}
		free(ht->array);
		free(ht);
	}
}
