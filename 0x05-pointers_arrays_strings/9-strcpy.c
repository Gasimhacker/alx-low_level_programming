#include "main.h"
/**
 * _strcpy - Copy a string in one variable into another variable
 * @src: The string to be copied
 * @dest: The destination of the copied string
 *
 * Return: The pointer to the destination.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	dest[index + 1 ] = '\0';

	return (dest);	
}
