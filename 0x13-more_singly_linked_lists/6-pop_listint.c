#include "lists.h"

/**
 * pop_listint - Delete the head node of a listint_t linked list
 * @head: A pointer to a pointer to the head of listint_t linked list
 *
 * Return: The head node’s data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int num = 0;
	listint_t *tmp;

	if (*head)
		num = (*head)->n;


	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);

}
