#include "lists.h"

/**
 * calc_unique_nodes - Calculate the number of unique
 *		       nodes of a looped linked list
 * @h: A pointer to the head of the linked list
 * @hare: A pointer to the meeting point of the slow and fast pointers
 *
 * Return: The number of uniqe nodes of a looped linked list
 */
size_t calc_unique_nodes(listint_t *h, listint_t *hare)
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
 * calculate_nodes - Calculate the number of unique nodes in a linked list
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of uniqe nodes of a linked list
 */
size_t calculate_nodes(listint_t *h)
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

	nodes = calc_unique_nodes(h, hare);
	return (nodes);

}

/**
 * free_listint_safe - Print all the elemnts of listint_t list
 * @h: A pointer to a pointer to the head of the linked list
 *
 * Return: The number of nodes in the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num_nodes = calculate_nodes(*h);
	size_t i;
	listint_t *tmp;

	for (i = 0; i < num_nodes; i++)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
	}

	*h = NULL;

	return (num_nodes);
}
