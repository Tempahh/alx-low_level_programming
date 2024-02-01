#include "hash_tables.h"

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash_value = 5381;

	int c;

	while ((c = *str++))
	{
		hash_value = ((hash_value << 5) + hash_value) + c;
	}
	return (hash_value);
}
