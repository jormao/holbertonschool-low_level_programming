#include"hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (j > 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			j = 1;
		}
		i++;
	}
	printf("}\n");
}
