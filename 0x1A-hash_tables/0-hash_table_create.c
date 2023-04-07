#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;

	newtable = malloc(sizeof(hash_table_t));
	if (newtable == ((void *) 0))
		return ((void *) 0);

	newtable->size = size;
	newtable->array = malloc(size * sizeof(hash_node_t *));
	if (newtable->array == ((void *) 0))
		return ((void *) 0);
	if (size > 0)
	{
		newtable->array[0] = ((void *) 0);
		for(size = size - 1; size != 0; size--)
			newtable->array[size] = ((void *) 0);
	}

	return (newtable);
}
