#include "hash_tables.h"

/**
 * hash_table_create - Function that create a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_tab = NULL;
	hash_node_t **n_arr = NULL;
	unsigned int i;

	if (size < 1)
		return (NULL);
	n_tab = malloc(sizeof(hash_table_t));
	if (n_tab == NULL)
		return (NULL);
	n_arr = malloc(sizeof(hash_node_t *) * size);
	if (n_arr == NULL)
	{
		free(n_tab);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		n_arr[i] = NULL;
	}
	n_tab->size = size;
	n_tab->array = n_arr;
	return (n_tab);
}
