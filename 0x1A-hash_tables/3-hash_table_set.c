#include "hash_tables.h"


/**
 * hash_table_set - Add an element to the hash table
 * @ht: A pointer to the hash table
 * @key: The key - it cannot be an empty string
 * @value: The value value associated with the key
 *
 * Return: On success - 1
 *	   On failure - 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *value_copy;
	hash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (strcmp(ht->array[index]->key, key) == 0)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = value_copy;
		return (1);
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(value_copy);
		free(new);
		return (0);
	}

	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
