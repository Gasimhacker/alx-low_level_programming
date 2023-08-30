#include "lists.h"

/**
 * looped_listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL)
		exit(98);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

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
	size_t num_nodes, i;

	num_nodes = looped_listint_len(h);

	if (num_nodes == 0)
	{
		for (; h != NULL; num_nodes++)
		{
			printf("[%p] %d\n", (void *)h, h->n);
			h = h->next;
		}
	}

	else
	{
		for (i = 0; i < num_nodes; i++)
		{
			printf("[%p] %d\n", (void *)h, h->n);
			h = h->next;
		}

		printf("-> [%p] %d\n", (void *)h, h->n);
	}

	return (num_nodes);
}
