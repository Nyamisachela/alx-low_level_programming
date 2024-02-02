#include "hash_tables.h"

/**
 * key_index - Get the index of a key in the hash table array
 * @key: The key
 * @size: The size of the array of the hash table
 * Return: The index at which the key should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

    /* Get the hash value using the djb2 algorithm */
	hash_value = hash_djb2(key);

    /* Return the index in the array based on the hash value and size */
	return (hash_value % size);
}
