#include <stdlib.h>

/**
 * _strlen - Calculate the length of the string
 * @str: The string to calculate its length
 *
 * Return: The length of the string,
 *	   if NULL or empty string is passed return 0
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (str && *str++)
		len++;

	return (len);
}

/**
 * str_concat - Concatenate two strings given as a parameter into
 *		  a newly allocated memory space
 * @s1: The string to be put first in the new string
 * @s2: The string to be put second in the new string
 *
 * Return: A pointer to the concatenated string, NULL otherwise
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int len1, len2;
	char *cat_str;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	cat_str = malloc((len1 + len2 + 1) * sizeof(char));

	if (cat_str == 0)
		return (cat_str);

	for (i = 0; (i < len1) || (i < len2); i++)
	{
		if (i < len1)
			*(cat_str + i) = *(s1 + i);
		if (i < len2)
			*(cat_str + len1 + len2 - i - 1) = *(s2 + len2 - i - 1);
	}
	*(cat_str + len1 + len2) = '\0';

	return (cat_str);
}
