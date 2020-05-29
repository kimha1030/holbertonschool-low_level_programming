#include "hash_tables.h"
/**
 * hash_table_delete - Function that delte a hash table.
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux;

	while (ht->array[i])
	{
		aux = ht->array[i];
		aux = aux->next;
		free(aux->key);
		free(aux->value);
		free(aux);
	}
	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
}
