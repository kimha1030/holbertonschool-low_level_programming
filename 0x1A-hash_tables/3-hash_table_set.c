#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value
 * @key: key
 * @value: value associated with the key
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ix;
	hash_node_t *aux, *tmp;
	char *copy;

	if (ht == NULL)
		return (0);
	if ((key == NULL) || (value == NULL))
		return (0);
	copy = strdup(value);
	if (copy == NULL)
		return (0);
	ix = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[ix];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			tmp->value = copy;
			return (1);
		}
		tmp = tmp->next;
	}
	aux = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (aux == NULL)
		return (0);
	aux->key = strdup(key);
	if (aux->key == NULL)
	{
		free(aux);
		return (0);
	}
	aux->value = copy;
	aux->next = ht->array[ix];
	ht->array[ix] = aux;
	return (1);
}
