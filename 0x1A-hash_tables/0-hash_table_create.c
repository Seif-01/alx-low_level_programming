#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size in number of nodes
 *
 * Return: a pointer tio the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *res = malloc(sizeof(*res));
	hash_node_t **arr;

	if (!res)
		return (0);
	arr = malloc(size * sizeof(*arr));
	if (!arr)
	{
		free(res);
		return (0);
	}
	while (i < size)
	{
		arr[i] = NULL;
		i++;
	}
	res->size = size;
	res->array = arr;
	return (res);
}
