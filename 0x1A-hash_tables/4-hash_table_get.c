#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht: hash table you want to add or update the key/value
 * @key: key
 * Return: value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ix;
	hash_node_t *aux = NULL;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);
	ix = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[ix];
	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
		{
			return (aux->value);
		}
		aux = aux->next;
	}
	return (NULL);
}
