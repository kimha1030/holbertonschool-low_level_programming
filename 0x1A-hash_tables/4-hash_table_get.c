#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht: hash table you want to add or update the key/value
 * @key: key
 * Return: value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ix, i;
	char *copy = NULL;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);
	ix = key_index((const unsigned char *)key, ht->size);
	for (i = ix; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			copy = strdup(ht->array[i]->value);
		}
		else
		{
			return (NULL);
		}
	}
	return (copy);
}
