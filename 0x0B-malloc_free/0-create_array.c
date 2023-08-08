#include <stdlib.h>
/**
 * create_array - Create an array of chars, and initializes
 *		  it with a specific char
 * @size: The size of the array
 * @c: The character to be initialized in the array
 *
 * Return: A pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (0);

	p = malloc(size * sizeof(char));

	if (p == 0)
		return (p);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
