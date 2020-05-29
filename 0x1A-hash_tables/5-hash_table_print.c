#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table.
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, size;
	int cont = 0;

	if (ht != NULL)
	{
		size = ht->size;
		printf("{");
		while (i < size)
		{
			while (ht->array[i])
			{
				if (cont > 0)
				{
					printf(", ");
				}
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				cont++;
				ht->array[i] = ht->array[i]->next;
			}
			i++;
		}
		printf("}\n");
	}
}
