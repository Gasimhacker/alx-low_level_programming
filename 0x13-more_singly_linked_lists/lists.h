#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>


/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


/**
 * print_listint - Print all the elemnts of listint_t list
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the linked list
 */
size_t print_listint(const listint_t *h);

/**
 * listint_len - Return the number of elemnts in listint_t list
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the linked list
 */
size_t listint_len(const listint_t *h);

#endif /* LISTS_H */
