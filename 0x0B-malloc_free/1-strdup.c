#include <stdlib.h>

/**
 * _strlen - Calculate the length of the string
 * @str: The string to calculate its length
 *
 * Return: The length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strdup - Copy a string given as a parameter into
 *		  a newly allocated memory space
 * @str: The string to be copied
 *
 * Return: A pointer to the duplicated string, NULL otherwise
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int len;
	char *p;

	if (str == NULL)
		return (0);

	len = _strlen(str);

	p = malloc((len + 1) * sizeof(char));

	if (p == 0)
		return (p);

	for (i = 0; i <= len; i++)
		*(p + i) = *(str + i);

	return (p);
}
