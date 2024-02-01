#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	hash_node_t *current = ht->array[index];

	if (ht == NULL)
	{
		return (NULL);
	}

	while (current != NULL)
	{
		if (current->key != NULL && strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
