#include "hash_tables.h"

/**
 * key_index - get the key
 * @key: char
 * @size: int
 * Return: int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
