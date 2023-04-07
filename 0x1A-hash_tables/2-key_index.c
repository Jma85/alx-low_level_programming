#include "hash_tables.h"

/**
 * key_index - gives index of the key
 * @key: key yo get index for
 * @size : size of hash table
 *
 * Return : index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) %size);
}
