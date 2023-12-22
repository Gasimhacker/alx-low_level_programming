#ifndef HASH_TABLE_H
#define HASH_TABLE_H



/* "Includes" */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/**
 * hash_table_create - Create a new hash table
 * @size: The size of the hash table
 *
 * Return: On success - A pointer to the newly created hash table
 *	   On failure - "NULL"
 */
hash_table_t *hash_table_create(unsigned long int size);

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str);

/**
 * key_index - Find the index according to the given key
 * @key: The key
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key/value pair
 *	   should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/**
 * hash_table_set - Add an element to the hash table
 * @ht: A pointer to the hash table
 * @key: The key - it cannot be an empty string
 * @value: The value value associated with the key
 *
 * Return: On success - 1
 *	   On failure - 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/**
 * hash_table_get - Retrieve an element from the hash table
 * @ht: A pointer to the hash table
 * @key: The key
 *
 * Return: On success - the value associated with the element
 *	   On failure - "NULL"
 */
char *hash_table_get(const hash_table_t *ht, const char *key);

/**
 * hash_table_print - Print a hash table
 * @ht: A pointer to the hash table
 *
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht);

/**
 * hash_table_delete - Delete a hash table
 * @ht: A pointer to the hash table
 *
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht);


#endif /* HASH_TABLE_H */
