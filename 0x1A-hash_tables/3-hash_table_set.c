#include "hash_tables.h"

/**
 * str_len: Length of string
 * @key: pointer to str
 * 
 * Return: Length of string
 */
unsigned long int str_len(const char *key)
{
	unsigned long int len = 0;

	while(key[len] != '\0')
		len++;
	return (len);
}

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key. value must be
 * duplicated. value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key,
	const char *value)
{
	unsigned long int indx;
	hash_node_t *nn;

	if (ht == NULL)
		return (0);
	if ((key == NULL) || (str_len(key) > 0))
		return (0);
	indx = key_index((const unsigned char *)key, ht->size);
	if ((ht->array[index] != NULL) &&
		(strcmp(ht->array[index]->key, key)) == 0)
	{
		ht->array[indx]->value = strdup(value);
		return (1);
	}
	else
	{
		nn = malloc(sizeof(hash_node_t));
		if (nn == NULL)
			return (0);
		nn->key = strdup(key);
		nn->value = strdup(value);
		nn->next = ht->array[indx];
		ht->array[0] = nn;
		return (1);
	}
}
