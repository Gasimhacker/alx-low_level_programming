#include "lists.h"

/**
 * check_next - Check if the next node is not a loop
 * @is_smaller: If this is set to 1
 *		the function the next node's address should be smaller than
 *		the current node's address
 * @is_greater: If this is set to 1
 *		the function the next node's address should be greater than
 *		the current node's address
 * @h: A pointer to a node in the linked list that we want to check
 *
 * Return: 1 If the check is true, 0 otherwise
 */
char check_next(char is_smaller, char is_greater, const listint_t *h)
{
	if ((is_smaller && h->next < h) || (is_greater && h->next > h))
		return (1);
	else
		return (0);
}


/**
 * print_listint_safe - Print all the elemnts of listint_t list
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the linked list
 *	   If the function fails, exit the program with status 98
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t num_nodes = 0;
	char is_smaller = 0, is_greater = 0;

	if (h->next < h)
		is_smaller = 1;
	else if (h->next > h)
		is_greater = 1;

	while (h)
	{
		printf("[%p] %d\n", (void *)h, h->n);

		if (check_next(is_smaller, is_greater, h))
		{
			h = h->next;
			num_nodes++;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)(h->next), h->next->n);
			return (98);
		}
	}
	return (num_nodes);
}
