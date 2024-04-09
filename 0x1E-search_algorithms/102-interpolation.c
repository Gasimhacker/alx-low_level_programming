#include "search_algos.h"

/**
 * interpolation_search - The interpolation search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: If the value is pesent - The index where value is located
 *	   Otherwise - "-1"
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1;
	size_t pos = l +
		(((double)(h - l) / (array[h] - array[l])) * (value - array[l]));

	if (array == NULL)
		return (-1);
	while (pos < size)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] > value)
			h = pos - 1;
		if (array[pos] < value)
			l = pos + 1;
		else
			return (pos);
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
