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
	hash_node_t *head, *new;


	if (!ht)
		return (0);

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	if (head == NULL)
		new->next = NULL;
	else
		new->next = head;

	head = new;

	return (1);
}
