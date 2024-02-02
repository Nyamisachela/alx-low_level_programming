#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size - size of array
 * Return- pointer to the hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size);
{
	hash_table_t *h_table;
	unsigned long int i;
	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);

	/*Allocate memory for the array of pointers*/
	h_table->size = size;
	h_table->array = malloc(sizeof(hash_table_t *) *size);
	if (h_table->array == NULL)
		return(NULL);
	
	/*Initialize each element in the array to NULL*/
	for(i = 0; i < size; i++)
		h_table->array[i] = NULL;

	return (h_table);
}
