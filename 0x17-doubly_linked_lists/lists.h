#ifndef LISTS_H
#define LISTS_H


#include <stdio.h>
#include <stdlib.h>

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

/**
 * add_dnodeint - Add a new node at the biginning of a linked list
 * @head: A pointer to a pointer to the first node in the linked list
 * @n: The number to put inside the node
 *
 * Return: A pointer to the head of the linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/**
 * add_dnodeint_end - Add a new node at the end of a linked list
 * @head: A pointer to a pointer to the first node in the linked list
 * @n: The number to put inside the new node
 *
 * Return: A pointer to the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

#endif /* LISTS_H */
