#include "lists.h"

/**
 * calc_uniq_nodes - Calculate the number of unique
 *		     nodes of a looped linked list
 * @h: A pointer to the head of the linked list
 * @hare: A pointer to the meeting point of the slow and fast pointers
 *
 * Return: The number of uniqe nodes of a looped linked list
 */
size_t calc_uniq_nodes(const listint_t *h, listint_t *hare)
{
	listint_t *last_node, *tortoise;
	size_t nodes = 2;

	tortoise = h->next;
	last_node = hare;
	hare = hare->next;

	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		last_node = hare;
		hare = hare->next;
	}

	tortoise = h->next;

	while (tortoise != last_node)
	{
		nodes++;
		tortoise = tortoise->next;
	}

	return (nodes);

}


/**
 * calc_nodes - Calculate the number of unique nodes in a linked list
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of uniqe nodes of a linked list
 */
size_t calc_nodes(const listint_t *h)
{
	listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (h == NULL)
		return (0);

	if (h == h->next)
		return (1);

	tortoise = h->next;
	if (h->next)
		hare = h->next->next;

	while (tortoise && tortoise != hare)
	{
		nodes++;
		tortoise = tortoise->next;

		if (hare && hare->next)
			hare = hare->next->next;
		else if (hare)
			hare = hare->next;
	}

	if (tortoise == NULL)
		return (nodes);
	/* A loop of 2 nodes */
	else if (nodes == 2)
		return (nodes);

	nodes = calc_uniq_nodes(h, hare);
	return (nodes);

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
	size_t num_nodes = calc_nodes(h);
	size_t i;

	for (i = 0; i < num_nodes; i++)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		h = h->next;
	}

	if (h != NULL)
	{
		printf("-> [%p] %d\n", (void *)(h), h->n);
	}

	return (num_nodes);
}
