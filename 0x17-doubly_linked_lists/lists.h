#ifndef LISTS_H
#define LISTS_H


#include <stdio.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;


/**
 * print_dlistint - Print all the elements of a dlistint_t list
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h);

/**
 * dlistint_len - Calculates the number of nodes in a linked list
 * @h: A pointer to the first node in the linked list
 *
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h);

#endif /* LISTS_H */
