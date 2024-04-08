#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* "Header files" */
#include <stdio.h>


/* "Functions" */
/**
 * linear_search - The linear search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: If the value is pesent - The index where value is located
 *	   Otherwise - "-1"
 */
int linear_search(int *array, size_t size, int value);
/**
 * binary_search - The binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: If the value is pesent - The index where value is located
 *	   Otherwise - "-1"
 */
int binary_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
