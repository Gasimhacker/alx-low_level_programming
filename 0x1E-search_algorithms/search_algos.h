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
/**
 * jump_search - The jump search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: If the value is pesent - The index where value is located
 *	   Otherwise - "-1"
 */
int jump_search(int *array, size_t size, int value);
/**
 * interpolation_search - The interpolation search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: If the value is pesent - The index where value is located
 *	   Otherwise - "-1"
 */
int interpolation_search(int *array, size_t size, int value);
/**
 * exponential_search - The exponential search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: If the value is pesent - The index where value is located
 *	   Otherwise - "-1"
 */
int exponential_search(int *array, size_t size, int value);
/**
 * advanced_binary - The advanced binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: If the value is pesent - The index where value is located
 *	   Otherwise - "-1"
 */
int advanced_binary(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
