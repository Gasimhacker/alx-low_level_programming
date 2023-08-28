#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

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

/**
 * add_nodeint - Add a new node at the beginning of a listint_t list
 * @head: A pointer to a pointer to the head of the linked list
 * @n: The integer to put inside the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n);

/**
 * add_nodeint_end - Add a new node at the end of a listint_t list
 * @head: A pointer to a pointer to the head of the linked list
 * @n: The integer to put inside the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n);

/**
 * free_listint - Free a listint_t list
 * @head: A pointer to the head of the listint_t list
 *
 * Return: void
 */
void free_listint(listint_t *head);

/**
 * free_listint2 - Free a listint_t list
 * @head: A pointer to a pointer to the head of the listint_t list
 *
 * Return: void
 */
void free_listint2(listint_t **head);


#endif /* LISTS_H */
