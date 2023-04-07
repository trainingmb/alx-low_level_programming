#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t * newtable;

	newtable = malloc(sizeof(hash_table_t));
	if (newtable == ((void *) 0))
		return ((void *) 0);
	newtable->size = size;
	newtable->array = ((void *) 0);

	newtable->array = malloc(size * hash_node_t);
	if (newtable->array == ((void *) 0))
	{
		free(newtable);
		return ((void *) 0);
	}
	return (newtable);
}
